#include<iostream>
using namespace std;

class person{
	private :
		string name;
		int id;
	public :
	 
	 person(){
	 	name = "Unknow";
	 	id   =0;
	 }	
	 
	 person(string n,int i){
	 	this->name =n;
	 	this->id =i;
	 }
	 
	 void SetData(string n,int i){
	 	this->name= n;
	 	this->id=i;
	 }
	 string getName(){
	 	return name;
	 }
	 int getId(){
	 	return id;
	 }
};

int main(){
	string name;
	int id;
	person obj("Samol",99),obj1[2];
	obj1[0].SetData("fata",78);
//	obj[0].Se();
	
	cout<<obj1[0].getName()<<endl;
	cout<<obj1[0].getId()<<endl;
	// loop
	for(int i=0;i<2;i++){
		cout<<"Enter Name :";cin>>name;
		cout<<"Enter ID   :";cin>>id;
		obj1[i].SetData(name,id); 
	}
	
	for (int i=0;i<2;i++){
		cout<<"Name :"<<obj1[i].getName()<<endl;
		cout<<"ID   :"<<obj1[i].getId()<<endl;
	}
	return 0;
}
