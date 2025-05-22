#include<iostream>
using namespace std;

int id,qty;
string name;
double price,total,totald,totalr;

void InputProduck(){
	cout<<"Enter name of produck  :";cin>>name;
	cout<<"Enter ID of produck    :";cin>>id;
	cout<<"Enter Qty of produck   :";cin>>qty;
	cout<<"Enter Price of produck :";cin>>price;
	total = (price*qty);
	totald = total;
	totalr = totald*4000;
}
void OutputProduck(){
		cout<<"Name Produck  :"<<name<<endl;
	cout<<"ID produck    :"<<id<<endl;
	cout<<"Qty produck   :"<<qty<<endl;
	cout<<"Price produck :"<<price<<endl;
	cout<<"Total         :"<<total<<endl;
}
int main(){

	int size;
	cout<<"Enter Number of Produck :";cin>>size;
	for (int i=0;i<size;i++){
	cout<<"Your produck :"<<i+1<<endl;
	InputProduck();
}
cout<<"Enter Number of Produck :";cin>>size;
	for (int i=0;i<size;i++){
	cout<<"Your produck :"<<i+1<<endl;
	OutputProduck();
}
	
	return 0;
}
