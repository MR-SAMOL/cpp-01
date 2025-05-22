#include<iostream>
using namespace std;

class Employee{
	private :
		string name;
		int code;
		char sex;
		float salary;
		// CONSTRUCTOR
	public :
	    Employee	(){
	    	name = "Unknow";
	    	code  =0;
	    	sex ='Unknow';
	    	salary = 0;
		}
		Employee(string n,int c,char s,float sr){
			this->name=n;
			this->code=c;
			this->sex=s;
			this->salary=sr;
		}
		// SETTER
		void SetData(string n,int c,char s,float sr){
			this->name = n;
			this->code = c;
			this->sex = s;
			this->salary = sr;
		}
		// GETTER
		string getName(){
			return name;
		}
		int getCode(){
			return code;
		}
		char getSex(){
			return sex;
		}
		float getSalary(){
			return salary;
		}
		// INTPUT
		void InputEmployee(){
			cout<<"Enter Name :";cin>>name;
			cout<<"Enter Code :";cin>>code;
			cout<<"Enter Sex  :";cin>>sex;
			cout<<"Enter Salary :";cin>>salary;
		}
		// OUTPUT
		void OutputEmployee(){
			cout<<"Name :"<<name<<endl;
			cout<<"Code :"<<code<<endl;
			cout<<"Sex  :"<<sex<<endl;
			cout<<"Salary :"<<salary<<endl;
			cout<<"---------------------------"<<endl;
		}
};

int main(){
	string name;
	int code;
	char sex;
	float salary;
	Employee obj("samol",123,'M',200),obj1[1];
	obj1[0].SetData("Tata",444,'F',300);
	cout<<obj1[0].getName()<<endl;
	cout<<obj1[0].getCode()<<endl;
	cout<<obj1[0].getSex()<<endl;
	cout<<obj1[0].getSalary()<<endl;
	int size;
	// INPUT
	cout<<"=======================Input==================="<<endl;
	cout<<"Enter Employee You Want :";cin>>size;
	for (int i=0;i<size;i++){
		obj1[i].InputEmployee();
	}
	// Output
	cout<<"=======================Output==================="<<endl;
	for (int i=0;i<size;i++){
		obj1[i].OutputEmployee();
	}
	return 0;
}
