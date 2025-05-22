#include<iostream>
using namespace std;

class person{
	public :
		string name;
		int id;
		char gender;
	
	void InputPersonName(){
		
	}
};

int main(){
	person p;
	p.name = "Samol";
	p.id   = 987;
	p.gender ='M';
	
	cout<<"Name   :"<<p.name<<endl;
	cout<<"ID     :"<<p.id<<endl;
	cout<<"Gender :"<<p.gender<<endl;
	
	return 0;
}

