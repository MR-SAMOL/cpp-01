#include<iostream>
using namespace std;
float s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,total,average;
char grade;
string name,gender;
int id;
float Input(string stuName,string stuGender,int stuID,float stuS1,float stuS2,float stuS3,float stuS4,float stuS5,float stuS6,float stuS7,float stuS8,float stuS9,float stuS10){
	name = stuName;
	gender = stuGender;
	id = stuID;
	s1 = stuS1;
	s2 = stuS2;
	s3 = stuS3;
	s4 = stuS4;
	s5 = stuS5;
	s6 = stuS6;
	s7 = stuS7;
	s8 = stuS8;
	s9 = stuS9;
	s10 = stuS10;
	total = s1+s2+s3+s4+s5+s6+s7+s8+s9+s10;
	average = total/10;
	grade = (average >90 && average <=100)? 'A':
			(average >80 && average<=90)? 'B':
			(average >70 && average <=80)? 'C':
			(average >60 && average <=70)? 'D':
			(average >50 && average <=60)? 'E':
			'F';			
}
void  Output (){
	cout<<"======================================================================================================="<<endl;
	cout<<"ID\tName\tGender\tscore1\tscore2\tscore3\tscore4\tscore5\score6\score7\tscore8\tscore9\tscore10\tTotal\tAverage\tGrade"<<endl;
	cout<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<s1<<"\t"<<s2<<"\t"<<s3<<"\t"<<s4<<"\t"<<s5<<"\t"<<s6<<"\t"<<s7<<"\t"<<s8<<"\t"<<s9<<"\t"<<s10<<"\t"<<total<<"\t"<<average<<"\t"<<grade<<endl;
	cout<<"======================================================================================================="<<endl;
}

int main (){
	Intput("kata","Female",168,70,80,100,60,90,70,60,50,90,77);
	Output();
	return 0;
}
