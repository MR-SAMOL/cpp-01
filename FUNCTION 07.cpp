#include<iostream>
using namespace std;
	int id,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
	string name,gender,grade;
	double total;
	float average;
	

void Input(){
	cout<<"=====================[ Input ]=============================="<<endl;
	cout<<"Enter your ID :";cin>>id;
	cout<<"Enter the value S1 :";cin>>s1;
	cout<<"Enter the value S2 :";cin>>s2;
	cout<<"Enter the value S3 :";cin>>s3;
	cout<<"Enter the value S4 :";cin>>s4;
	cout<<"Enter the value S5 :";cin>>s5;
	cout<<"Enter the value S6 :";cin>>s6;
	cout<<"Enter the value S7 :";cin>>s7;
	cout<<"Enter the value S8 :";cin>>s8;
	cout<<"Enter the value S9 :";cin>>s9;
	cout<<"Enter the value S10 :";cin>>s10;
	cout<<"Enter your Name :";cin>>name;
	cout<<"Enter your Gender :";cin>>gender;
	total = s1+s2+s3+s4+s5+s6+s7+s8+s9+s10;
	average = total/10;
	
	 
	if(total >90 && total<=100){
		grade = 'A';
	}else if(total >80 && total<=90){
		grade = 'B';
	}else if(total >70 && total<=80){
		grade = 'C';
	}else if(total >60 && total <=70){
		grade = 'D';
	}else if (total >50 && total <=60){
		grade = 'E';
	}else if (total >0 && total <=50){
		grade = 'F';
	}	
}	
void Output(){
	cout<<"=======================[ Output ]==========================="<<endl;
	cout<<"Your Name :"<<name<<endl;
	cout<<"Your ID :"<<id<<endl;
	cout<<"totla :"<<total<<endl;
	cout<<"Average :"<<average<<endl;
	cout<<"Grade :"<<grade<<endl;
}
int main(){
	Input();
	Output();
	
	return 0;
}
