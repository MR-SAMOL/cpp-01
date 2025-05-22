#include<iostream>
using namespace std;
struct Employee{
	int id;
	char name[20];
	float salary;
}Emp;
struct Date{
	int day;
	int month;
	int year;
}date1;
struct Address{
	char city[20];
	int pin;
	char phone[14];
}add;


void InputEmployee(Employee &ple){
	cout<<"Employee Name   :";cin>>Emp.name;
	cout<<"Employee ID     :";cin>>Emp.id;
	cout<<"Employee Salary :";cin>>Emp.salary;
}
void OutputEmployee(Employee &ple){
	cout<<"Employee Name   :"<<Emp.name<<endl;
	cout<<"Employee ID     :"<<Emp.id<<endl;
	cout<<"Employee Salary :"<<Emp.salary<<endl;
}

void InputDate(Date &dat){
	cout<<"Enter Your Day   :";cin>>date1.day;
	cout<<"Enter Your Month :";cin>>date1.month;
	cout<<"Enter Your Year  :";cin>>date1.year;
}

void OutputDate(Date &dat){
	cout<<"Your Day   :"<<date1.day<<endl;
	cout<<"Your Month :"<<date1.month<<endl;
	cout<<"Your Year  :"<<date1.year<<endl;
}

void InputAddress(Address &adr){
	cout<<"Enter Your City         :";cin>>add.city;
	cout<<"Enter Your Pin          :";cin>>add.pin;
	cout<<"Enter Your Phone Number :";cin>>add.phone;
}

void OutputAddress(Address &adr){
	cout<<"Your City  :"<<add.city<<endl;
	cout<<"Your Pin   :"<<add.pin<<endl;
	cout<<"Your Phone :"<<add.phone<<endl;
}

int main(){
	int op;
	int size;
	do{
		
	cout<<"============Chosse Option==========="<<endl;
	cout<<"1. Choose Employee"<<endl;
	cout<<"2. Exit"<<endl;
	cin>>op;
	
	switch (op){
		case 1:{
			cout<<"Employee Choossing"<<endl;
			cout<<"Enter Employee You want :";cin>>size;
	struct Employee ple[size];
	struct Date dat[size];
	struct Address adr[size];
	for (int i=0;i<size;i++){
		cout<<"==================================="<<endl;
		
		cout<<"Employee"<<i+1<<endl;
		InputEmployee(ple[i]);
		InputDate(dat[i]);
		InputAddress(adr[i]);
	}
	for (int i=0;i<size;i++){
		cout<<"==================================="<<endl;
		cout<<"Employee"<<i+1<<endl;
		OutputEmployee(ple[i]);
		OutputDate(dat[i]);
		OutputAddress(adr[i]);
	}
			break;
		}case 2:{
		    cout<<"Exit--------------"<<endl;
		    return 0;
		}
		default :{
			cout<<"invalid choice agint"<<endl;
			break;
		}
	}
	}while(op!=2);
	
}
	
	/*int size;
	cout<<"Enter Employee You want :";cin>>size;
	struct Employee ple[size];
	struct Date dat[size];
	struct Address adr[size];
	for (int i=0;i<size;i++){
		cout<<"==================================="<<endl;
		
		cout<<"Employee"<<i+1<<endl;
		InputEmployee(ple[i]);
		InputDate(dat[i]);
		InputAddress(adr[i]);
	}
	for (int i=0;i<size;i++){
		cout<<"==================================="<<endl;
		cout<<"Employee"<<i+1<<endl;
		OutputEmployee(ple[i]);
		OutputDate(dat[i]);
		OutputAddress(adr[i]);
	}
	
	return 0;
}*/
