#include <SFML/Graphics.hpp>
#include <iostream>
#include <ctime>
#include <algorithm>

using namespace sf;

const int M = 20; // Height
const int N = 10; // Width

int field[M][N] = {0};

struct Point {
    int x, y;
} a[4], b[4];

int figures[7][4] = {
    {1, 3, 5, 7}, // I
    {2, 4, 5, 7}, // Z
    {3, 5, 4, 6}, // S
    {3, 5, 4, 7}, // T
    {2, 3, 5, 7}, // L
    {3, 5, 7, 6}, // J
    {2, 3, 4, 5}  // O
};

bool pause = false;
bool escapeButtonStatus = false;
unsigned score = 0;

bool check() {
    for (int i = 0; i < 4; i++) {
        if (a[i].x < 0 || a[i].x >= N || a[i].y >= M) return false;
        if (field[a[i].y][a[i].x]) return false;
    }
    return true;
}

void spawnNewPiece(int colorNum) {
    int n = rand() % 7;
    for (int i = 0; i < 4; i++) {
        a[i].x = figures[n][i] % 2 + N / 2 - 1;
        a[i].y = figures[n][i] / 2;
    }
}

int main() {
    srand(static_cast<unsigned>(time(0)));

    RenderWindow window(VideoMode(320, 480), "Tetris (SFML)");

    Texture t1, t2, t3;
    t1.loadFromFile("images/tiles.png");
    t2.loadFromFile("images/background.png");
    t3.loadFromFile("images/frame.png");

    Sprite tile(t1), background(t2), frame(t3);

    int dx = 0;
    bool rotate = false;
    int colorNum = 1 + rand() % 7;
    float timer = 0, delay = 0.3f;

    Clock clock;

    spawnNewPiece(colorNum);

    while (window.isOpen()) {
        if (!pause && !escapeButtonStatus)
            timer += clock.restart().asSeconds();

        Event e;
        while (window.pollEvent(e)) {
            if (e.type == Event::Closed)
                window.close();
            else if (e.type == Event::LostFocus)
                pause = true;
            else if (e.type == Event::GainedFocus)
                pause = false;
            else if (e.type == Event::KeyPressed) {
                if (e.key.code == Keyboard::Escape)
                    escapeButtonStatus = !escapeButtonStatus;
                else if (e.key.code == Keyboard::Up)
                    rotate = true;
                else if (e.key.code == Keyboard::Left)
                    dx = -1;
                else if (e.key.code == Keyboard::Right)
                    dx = 1;
            }
        }

        if (pause || escapeButtonStatus) {
            sf::sleep(sf::milliseconds(250));
            continue;
        }

        if (Keyboard::isKeyPressed(Keyboard::Down))
            delay = 0.05;

        // Move
        for (int i = 0; i < 4; i++) {
            b[i] = a[i];
            a[i].x += dx;
        }
        if (!check()) {
            for (int i = 0; i < 4; i++)
                a[i] = b[i];
        }

        // Rotate
        if (rotate) {
            Point p = a[1]; // center
            for (int i = 0; i < 4; i++) {
                int x = a[i].y - p.y;
                int y = a[i].x - p.x;
                a[i].x = p.x - x;
                a[i].y = p.y + y;
            }
            if (!check())
                for (int i = 0; i < 4; i++)
                    a[i] = b[i];
        }

        // Drop
        if (timer >= delay) {
            for (int i = 0; i < 4; i++) {
                b[i] = a[i];
                a[i].y += 1;
            }

            if (!check()) {
                for (int i = 0; i < 4; i++)
                    field[b[i].y][b[i].x] = colorNum;

                colorNum = 1 + rand() % 7;
                spawnNewPiece(colorNum);
                if (!check()) {
                    window.close();
                    break;
                }
            }

            timer = 0;
        }

        // Clear lines
        int k = M - 1;
        for (int i = M - 1; i >= 0; i--) {
            int count = 0;
            for (int j = 0; j < N; j++) {
                if (field[i][j]) count++;
                field[k][j] = field[i][j];
            }
            if (count < N) k--;
            else score++;
        }

        dx = 0;
        rotate = false;
        delay = 0.3f;

        // Draw
        window.clear(Color::White);
        window.draw(background);

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (field[i][j] == 0) continue;
                tile.setTextureRect(IntRect(field[i][j] * 18, 0, 18, 18));
                tile.setPosition(j * 18, i * 18);
                tile.move(28, 31); // offset
                window.draw(tile);
            }
        }

        for (int i = 0; i < 4; i++) {
            tile.setTextureRect(IntRect(colorNum * 18, 0, 18, 18));
            tile.setPosition(a[i].x * 18, a[i].y * 18);
            tile.move(28, 31); // offset
            window.draw(tile);
        }

        window.draw(frame);
        window.display();
    }

    std::cout << "Game Over\n";
    std::cout << "Your score: " << score << std::endl;
    return 0;
}

