#include<iostream>
using namespace std;
int code[10],qty[10],i,size;
string name[10];
float total,payment,price[10];

void Intputstock(){
	cout<<"\t\t=========================================[Input Stock]====================================="<<endl;
	cout<<"\t\tEnter size of product :";cin>>size;
	for(int i = 0; i>size;i++){
		cout<<"\t\t======================================[Stock "<<i+1<<"]================================"<<endl;
		cout<<"\t\tEnter code :";cin>>code[i];
		cout<<"\t\tEnter name :";cin>>name[i];
		cout<<"\t\tEnter price :";cin>>price[i];
		cout<<"\t\tEnter Quantily :";cin>>qty[i];
	}
	cout<<"\t\t=======================================[End Input]=========================================="<<endl;
}
void Header 
	int main(){
		int options;
		do{
			cout<<"\t\t======================================[Menu]============================================"<<endl;
			cout<<"\t\t[ 1. Intput stock."<<endl;
			cout<<"\t\t[ 2. Display stock."<<endl;
			cout<<"\t\t[ 3. payment Dollar."<<endl;
			cout<<"\t\t[ 4. payment Riel."<<endl;
			cout<<"\t\t[ 5. Exit [0]."<<endl;
			cout<<"\t\tplease choose an option :";cin>>options;
			switch(options){
				case 0:{
					cout<<"\t\t===============================[Good bye]========================================"<<endl;
					break;
				}case 1:{
					Intputstock;
					break;
			}
		}	
    }while(options!=0);
}
