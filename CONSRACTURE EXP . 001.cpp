#include<iostream>
using namespace std;

class person{
	private :
		string name;
		int id;
    public :
	 person(){
	 	name = "Hello";
	 	id   =0;
	 }	
	   person (string n,int i){
	   	this->name = n;
	   	this->id = i;
	   }
	  void Display(){
	  	cout<<"Name :"<<name<<endl;
	  	cout<<"ID   :"<<id<<endl;
	  }
};

int main(){
	person obj;
	obj.Display();
	person obj1("Samol",876);
	obj1.Display();
	return 0;
}
