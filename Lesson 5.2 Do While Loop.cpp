#include<iostream>
using namespace std;
int main(){
	int op;
	float rate,amount,exchange;
	do{
		cout<<"Please choose an option."<<endl;
		cout<<"1. Exchange Dollar to Riel."<<endl;
		cout<<"2. Exchange Riel to Dollar."<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"Chosse option :";cin>>op;
		
		if(op==1){
			cout<<"How cost you want to exchange to Riel :";cin>>exchange;
			rate = 4000;
			amount = exchange * rate;
			cout<<"Dollar to Riel :"<<amount<<"R"<<endl;
		}else if(op==2){
			cout<<"How cost you want to exchange to Dollar :";cin>>exchange;
			rate = 4000;
			amount = exchange / rate;
			cout<<"Reil to Dollar :"<<amount<<"$"<<endl;
			
		}else{
			cout<<"=================Thank you======================"<<endl;
		}
	}while(op!=0);
	
	
	
	return 0;
}
