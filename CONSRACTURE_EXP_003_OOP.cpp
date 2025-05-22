#include<iostream>
using namespace std;

class Employee{
	
	private:
		int code;
		string name;
		char sex;
		float salary;
	public :
	 void Input(){
	 	cout<<"Enter your code   :";cin>>code;
	 	cout<<"Enter your Name   :";cin>>name;
	 	cout<<"Enter your sex    :";cin>>sex;
	 	cout<<"Enter your salary :";cin>>salary;
	 	cout<<"================================="<<endl;
	 }	
	 void Output(){
	 	cout<<"Code   :"<<code<<endl;
	 	cout<<"Name   :"<<name<<endl;
	 	cout<<"Sex    :"<<sex<<endl;
	 	cout<<"Salary :"<<salary<<endl;
	 	cout<<"=================================="<<endl;
	 }
	
};

int main(){
	Employee obj;
	obj.Input();
	obj.Output();
	
	return 0;
}
