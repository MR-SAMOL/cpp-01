#include<iostream>
using namespace std;

class Math{
	private:
		int a=1,b=1,c=24,d=40;
	public:
	 void operator +(){
	 	a-=10;
	 }	
	 void operator -(){
	 	b+=10;
	 }
	 void operator *(){
	 	c*=12;
	 }
	 void operator ++(){
	 	d+=10;
	 }
	 void Display(){
	 	cout<<"Result  a :"<<a<<endl;
	 	cout<<"Result  b :"<<b<<endl;
	 	cout<<"Result  c :"<<c<<endl;
	 	cout<<"Result  d :"<<d<<endl;
	 }
};
int main(){
	Math m;
	+m;
	m.Display();
	-m;
	m.Display();
	*m;
	m.Display();
	++m;
	m.Display();
	
	return 0;
}
