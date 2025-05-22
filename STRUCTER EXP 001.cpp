#include<iostream>
using namespace std;

// Information of Your Teacher

struct Teacher{
	string name;
	string addres;
	int id;
	float grade;
	
}T1,T2;


void InputTeacher(Teacher &t){
	cout<<"===================================Input=========================="<<endl;
	cout<<"Name Teacher :";getline(cin, T1.name);
	cout<<"Your ID      :";cin>>T1.id;
	cout<<"Addres       :";getline(cin, T1.addres);
	cout<<"Grade        :";cin>>T1.grade;
	cin.ignore();
	cout<<"=================================================================="<<endl;
	
}

void OutputTeacher(Teacher &t){
	cout<<"================================Output==========================="<<endl;
	cout<<"Your Name   :"<<T1.name<<endl;
	cout<<"Your ID     :"<<T1.id<<endl;
	cout<<"Your Addres :"<<T1.addres<<endl;
	cout<<"Your Grade  :"<<T1.grade<<endl;
	cin.ignore();
;	cout<<"=================================================================="<<endl;	
}

int main(){
	
	int size;
	cout<<"Enter Number Of Teahers  :";cin>>size;
	struct Teacher Tea[size];
	cin.ignore();
	for (int i=0;i<size;i++){
	cout<<"===================================="<<endl;
	cout<<"Teacher"<<i+1<<endl;
	InputTeacher(Tea[i]);
		
	}
	
	for (int i=0;i<size;i++){
		cout<<"================================="<<endl;
		cout<<"Teacher"<<i+1<<endl;
		OutputTeacher(Tea[i]);
		
		
	}

	
	return 0;
}
