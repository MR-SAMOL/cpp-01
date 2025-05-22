#include<iostream>
using namespace std;
class Job1{
	private :
		int id1;
		string name1;
		float hight1;
	public :
		float salary1 = 900;
	 void IT(){
	 	cout<<"Enter your name   :";cin>>name1;
	 	cout<<"Enter your ID     :";cin>>id1;
	 	cout<<"Enter your salary :";cin>>salary1;
	 }	
	 void DisplayIT(){
	 	cout<<"Name   :"<<name1<<endl;
	 	cout<<"ID     :"<<id1<<endl;
	 	cout<<"Salary :"<<salary1<<endl;
	 }
};
class Job2{
	private :
		int id2;
		string name2;
		float hight2;
	public :
		float salary2 = 800;
	 void Youtube(){
	 	cout<<"Enter your name   :";cin>>name2;
	 	cout<<"Enter your Id     :";cin>>id2;
	 	cout<<"Enter your Salary :";cin;salary2;
	 }
	 void DisplayYoutube(){
	 	cout<<"Name 2   :"<<name2<<endl;
	 	cout<<"ID 2     :"<<id2<<endl;
	 	cout<<"Salary 2 :"<<salary2<<endl;
	 	
	 }	
};
class MyJob : public Job1,public Job2{
	void Result(){
		float result = salary1 + salary2;
		cout<<"My Result "<<result<<endl;
	}
};

int main(){
	MyJob samol;
	samol.IT();
	samol.DisplayIT();
	samol.Youtube();
	samol.DisplayYoutube();
	samol.();
	
	return 0;
}
