#include<iostream>
using namespace std;

int ValueX(){
	int x;
	x= 10;
	return x;
}

int ValueY(){
	int y;
	y = 20;
	return y;
}

float Sum(){
	ValueX();
	ValueY();
	return ValueX()+ValueY();
}

int main(){
	cout<<Sum();
}
