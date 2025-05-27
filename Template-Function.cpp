#include<iostream>
using namespace std;
// Fuction template
template<typename I,typename S>
class Person{
	private:
		int A;
		float B;
	public:
	 void setData(int a,int b){
	 	A =a;
	 	B =b;
	 }	
	 I getData(I p){
	 	return p;
	 }
	 S getData(S p){
	 	return p; 
	 }
};
int main(){
	Person<int,char*>p;
	cout<<p.getData(123)<<endl;
	cout<<p.getData("Hello")<<endl;
	return 0;
}
