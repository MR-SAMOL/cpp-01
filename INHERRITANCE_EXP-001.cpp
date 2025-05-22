#include<iostream>
using namespace std;
class Father{
	public:
		void Teasure(){
			cout<<"I have money "<<endl;
			cout<<"I have house "<<endl;
		}
};

class Son : public Father{
	public :
		void Getting(){
			cout<<"I am your son"<<endl;
		}
};

int main(){
	Son s;
	s.Getting();
	s.Teasure();
	
	return 0;
}
