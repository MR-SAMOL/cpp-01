#include<iostream>
using namespace std;
int main(){
	int id,op,val,i=1;
	string name,gender,address;
	double salary;
	
	cout<<"=============================================="<<endl;
	cout<<" 1. Add Employee"<<endl;
	cout<<" 2. Display Employee"<<endl;
	cout<<" 3. Edit Employee"<<endl;
	cout<<" 4. Exit"<<endl;
	cin>>op;
	
	switch(op){
		case 1:{
			cout<<"========================Add==================="<<endl;
			cout<<"Enter your employee :";cin>>val;
			while(i<=val){
				cout<<"Enter Employee ID :";cin>>id;
				cout<<"Enter Employee Name :";cin>>name;
				cout<<"Enter Employee Gender :";cin>>gender;
				cout<<"Enter Employee Address :";cin>>address;
				cout<<"Enter Employee Salary :";cin>>salary;
				i++;
			}break;
		}
	}
	case 2:{
		cout<<"=============================Display================="<<endl;
		cout<<"Enter Employee ID :"<<id<<endl;
		cout<<"Enter Employee Name :"<<name<<endl;
		cout<<"Enter Employee Gender :"<<gender<<endl;
		cout<<"Enter Employee Address :"<<address<<endl;
		cout<<"Enter Employee Salary :"<<salary<<endl;
		break;
	}
	case 3:{
		cout<<"==============================Edit====================="<<endl;
	    cout<<"Enter Employee ID to edit :";cin>>id;
		cout<<"Enter Employee Name :";cin>>name;
		cout<<"Enter Employee Gender :";cin>>gender;
		cout<<"Enter Employee Address :";cin>>address;
		cout<<"Enter Employee Salary :";cin>>salary;
		break;
	}
	case 4:{
		cout<<"========================Goodbye==========================="<<endl;
	}
}

