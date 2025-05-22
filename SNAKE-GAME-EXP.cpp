// SNAKE GAME IN C++
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

bool gameover;
const int width = 20;
const int height = 17;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

void Setup() {
    gameover = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw() {
    system("cls"); // Clear screen (use "clear" if you're on Unix/Linux)
    
    // Top wall
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    // Map content
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) cout << "#"; // Left wall

            if (i == y && j == x)
                cout << ">>"; // Snake head
            else if (i == fruitY && j == fruitX)
                cout << "%"; // Fruit
            else {
                bool printTail = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "*"; // Snake tail
                        printTail = true;
                        break;
                    }
                }
                if (!printTail)
                    cout << " ";
            }

            if (j == width - 1) cout << "#"; // Right wall
        }
        cout << endl;
    }

    // Bottom wall
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    cout << "Score: " << score << endl;
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a': dir = LEFT; break;
            case 'd': dir = RIGHT; break;
            case 'w': dir = UP; break;
            case 's': dir = DOWN; break;
            case 'x': gameover = true; break;
        }
    }
}

void Logic() {
    int prevX = tailX[0], prevY = tailY[0];
    int prev2X, prev2Y;

    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case LEFT:  x--; break;
        case RIGHT: x++; break;
        case UP:    y--; break;
        case DOWN:  y++; break;
        default: break;
    }

    // Wall wrap-around
    if (x >= width) x = 0; else if (x < 0) x = width - 1;
    if (y >= height) y = 0; else if (y < 0) y = height - 1;

    // Collision with tail
    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y)
            gameover = true;
    }

    // Eating fruit
    if (x == fruitX && y == fruitY) {
        score += 10;
        nTail++;

        // Make sure fruit doesn't spawn inside the snake
        do {
            fruitX = rand() % width;
            fruitY = rand() % height;
        } while (fruitX == x && fruitY == y);
    }
}

int main() {
    srand(time(0)); // Ensure random fruit placement
    Setup();

    while (!gameover) {
        Draw();
        Input();
        Logic();
    }

    cout << "Game Over! Final Score: " << score << endl;
    return 0;
}

