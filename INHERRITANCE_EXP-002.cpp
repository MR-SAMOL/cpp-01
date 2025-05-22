#include<iostream>
using namespace std;

class Wife1{
	public :
		float salary1 = 1000;
};

class Wife2{
	public :
		float salary2 =800;
};

class Husband : Wife1,Wife2{
	public :
		void Result(){
			float result = salary1+salary2;
			cout<<"My Result salary : "<<result<<endl;
		}
};
int main(){
	Husband hh;
	hh.Result();
	
	return 0;
}
