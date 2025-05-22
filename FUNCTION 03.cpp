#include<iostream>
using namespace std;
int id,qty,discord;
double total,payment,price;
string name;
void InputEmployee(){
	cout<<"Enter Employee ID :";cin>>id;
	cout<<"Enter Employee Name :";cin>>name;
	cout<<"Enter Employee QTY :";cin>>qty;
	cout<<"Enter Employee Price :";cin>>price;
	cout<<"Enter Employee Discord :";cin>>discord;
	total = price*qty;
	payment = total - (total*discord)/100;	
}
void DisplayEmployee(){
	cout<<"Employee ID :"<<id<<endl;
	cout<<"Employee Name :"<<name<<endl;
	cout<<"Employee QTY :"<<qty<<endl;
	cout<<"Employee Price :"<<price<<endl;
	cout<<"Employee Discord :"<<discord;
}
	int main(){
		InputEmployee();
		DisplayEmployee();
	}
