#include<iostream>
using namespace std;


float Value(int a, int b){
	cout<<"Inside Function Value ()"<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	return (a+b);
	float sum = a+b;
	return sum;
}

int main(){
	int x = 10, y = 30;
	cout<<"Before we assign to function value ()"<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	float z = value(x, y);
	cout<<"After we assign to fuction value()"<<endl;
	cout<<"sum = "<<z<<endl;
}
