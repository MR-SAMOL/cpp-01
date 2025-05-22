#include<iostream>
using namespace std;

class person{
	public :
		void Getting(){
			cout<<"Hello Baby "<<endl;
		}
};
 class employee : public person{
 	public :
 		void Getting(){
 			cout<<"Hi Baby"<<endl;
		 }
 	
 };
 
 int main(){
 	person*p = new employee();
 	p->Getting();
 	
 	return 0;
 }
 	

