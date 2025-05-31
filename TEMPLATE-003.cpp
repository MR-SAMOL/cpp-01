#include<iostream>
using namespace std;
// TEMPLATE CLASS
template <typename I,typename S,typename F>
class Student{
	private :
		int Id;
		string name,grade,gender;
		float salary;
	public :
	 void STU(int i,string n,string g,string gd,float s){
	 	Id =i;
	 	name =n;
	 	grade =g;
	 	gender =gd;
	 	salary =s;
	 }	
	 I getData(I p){
	 	return p;
	 }
	 S getData(S p){
	 	return p;
	 }
	 F getData(F p){
	 	return p;
	 }
};
int main(){
	Student<int ,string,float>s;
	cout<<"\033[0;43;31mStudent ID     \033[0m  :"<<s.getData(123)<<endl;
	cout<<"\033[0;47;32mStudent Name   \033[0m  :"<<s.getData("TAYA")<<endl;
	cout<<"\033[0;44;33mStudent Gender \033[0m  :"<<s.getData("Femal")<<endl;
	cout<<"\033[0;45;34mStudent Grade  \033[0m  :"<<s.getData('A')<<endl;
	cout<<"\033[0;41;35mStudent Salary \033[0m  :"<<s.getData(1500)<<endl;
	
	return 0;
}
