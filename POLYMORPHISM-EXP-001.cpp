#include<iostream>
using namespace std;

class Mom{
	private:
		string name;
		int age;
	public:
	 // overloading consturctor
	 Mom(){
	 	name ="HaLa";
	 	age =10;
	 }
	 Mom(string n){
	 	name =n;
	 	name ="FaTa";
	 	age =12;
	 }	
	 Mom(int a){
	 	age =a;
	 
	 }
	  void Input(){
	  	cout<<"Enter Name :";cin>>name;
	  	cout<<"Enter Age  :";cin>>age;
	  }
	  void Input(int AGE){
	  	cout<<"Enter Name :";cin>>name;
	  	age =AGE;
	  }
	  void Input(string n){
	  	name =n;
	  	cout<<"Enter Age :";cin>>age;
	  }
	 void Display(){
	 	cout<<"Name :"<<name<<endl;
	 	cout<<"Age  :"<<age<<endl;
	 }
	
};

int main(){
	Mom mom,mom1("FaTa"),mom2(19);
	cout<<"Obj1 :"<<endl;
	mom.Input();
	mom.Display();
	cout<<"obj2 :"<<endl;
	mom1.Input(32);
	mom1.Display();
	cout<<"Obj 3:"<<endl;
	mom2.Input("FaTad");
	mom2.Display();

	return 0;
}
