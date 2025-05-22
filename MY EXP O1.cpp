#include<iostream>
using namespace std;


struct Produck{
	int code;
	int qty;
	string name;
	float price;
	float totalD;
	float totalR;
}P1,P2;

// Input Your Produck

void InputProduck(Produck &pro){
	cout<<"==================================Input========================="<<endl;
	cout<<"Enter Name of produck      :";cin>>P1.name;
	cout<<"Enter Code of produck      :";cin>>P1.code;
	cout<<"Enter Qty of produck       :";cin>>P1.qty;
	cout<<"Enter the Price of produck :";cin>>P1.price;
	cout<<"Your Total in D            :";cin>>P1.totalD;
	cout<<"Your Total in R            :";cin>>P1.totalR;
	
	
}

void OutputProduck(Produck &pro){
	cout<<"===================================Output========================"<<endl;
	cout<<"Name of Produck  :"<<P1.name<<endl;
	cout<<"Code of produck  :"<<P1.code<<endl;
	cout<<"Qty of produck   :"<<P1.qty<<endl;
	cout<<"Price of Produck :"<<P1.price<<endl;
	cout<<"Total in D       :"<<P1.totalD<<endl;
	cout<<"Total in R       :"<<P1.totalR<<endl;
}

int main(){
	int size;
	cout<<"Enter Number of Produck :";cin>>size;
	struct Produck pro[size];
	for (int i=0;i<size;i++){
	cout<<"Your produck :"<<i+1<<endl;
	InputProduck(pro[i]);
}

    for (int i=0;i<size;i++){
    	cout<<"Your Produck :"<<i+1<<endl;
    	OutputProduck(pro[i]);
    	
	}
	
	return 0;
}


