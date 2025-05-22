#include<iostream>
using namespace std;

class Teacher{
	private :
		int id;
		string name;
	public:
	 void InputTeacher(){
	 	cout<<"\033[0;33m==================================================\033[0m"<<endl;
	 	cout<<"Enter Teacher Name   :";cin>>name;
	 	cout<<"Enter Teacher ID     :";cin>>id;
	 }	
	 void DisplayTeacher(){
	 	cout<<"\033[0;32m==================================================\033[0m"<<endl;
	 	cout<<"Teacher Name    :"<<name<<endl;
	 	cout<<"Teacher ID      :"<<id<<endl;
	 }
};

class Student{
	private :
	 int code,age;
	 string Name;
	public:
	 void InputStudent(){
	 	cout<<"\033[0;5m==================================================\033[0m"<<endl;
	 	cout<<"Enter Student Name   :";cin>>Name;
	 	cout<<"Enter Student Age    :";cin>>age;
	 	cout<<"Enter Student Code   :";cin>>code;
	 } 
	 void DisplayStudent(){
	 	cout<<"\033[0;5m==================================================\033[0m"<<endl;
	 	cout<<"Student Name :"<<Name<<endl;
	 	cout<<"Stuudent Age :"<<age<<endl;
	 	cout<<"Student Code :"<<code<<endl;
	 }
};
class Money : public Teacher,public Student{
};

int main(){
	Money mon;
	mon.InputTeacher();
	mon.DisplayTeacher();
	mon.InputStudent();
	mon.DisplayStudent();
}

