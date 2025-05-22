#include<iostream>
using namespace std;
void Header(){
	cout<<"======================================="<<endl;
	cout<<"          Grocery Store Inventory      "<<endl;
	cout<<"======================================="<<endl;
	cout<<"ID\tName\tPrice\tQty\tDiscount\t\tTotal\tPayment"<<endl;
	cout<<"---------------------------------------"<<endl;
}

	void Display(int id, string name, float price,int qty, int discount){
		float total,payment;
		total = price * qty;
		payment = total - (total * discount )/100;
		cout<<id<<"\t"<<name<<"\t$"<<price<<"\t"<<qty<<"\t\t"<<discount<<"%\t\t$"<<total<<"\t\t$"<<payment<<"\t"<<endl;
		cout<<"-------------------------------------"<<endl;
		
	}
	
	int main(){
		Header();
		Display(678,"ABC",20,10,12);
	
	}
