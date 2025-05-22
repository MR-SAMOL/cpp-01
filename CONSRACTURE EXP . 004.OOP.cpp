#include<iostream>
using namespace std;

class Employee{
	private :
		int code;
		string name;
		char sex;
		float salary;
	public :
		Employee(){
			name = "N/A";
			code = 0;
			sex  ='?';
			salary = 0;
		}	
	 Employee(string n,int c,char s,float sy){
	 	this->name = n;
	 	this->code = c;
	 	this->sex = s;
	 	this->salary= sy;
	 }	
	 
	 void Input(){
	 	cout<<"Enter Your Name   :";cin>>name;
	 	cout<<"ENter Your Code   :";cin>>code;
	 	cout<<"Enter Your Sex    :";cin>>sex;
	 	cout<<"Enter Your Salary :";cin>>salary;
	 }
	 
	 void Output(){
	 	cout<<"Name   :"<<name<<endl;
	 	cout<<"Code   :"<<code<<endl;
	 	cout<<"Sex    :"<<sex<<endl;
	 	cout<<"Salary :"<<salary<<endl;
	 }
};



int main(){
	
	Employee obj,obj1("Sata",987,'M',900);
	obj.Output();
	obj1.Output();
	
	obj1.Input();
	obj1.Output();
	
	return 0;
}
