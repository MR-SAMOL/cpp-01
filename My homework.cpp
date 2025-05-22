#include<iostream>
using namespace std;
int main(){
	int id,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
	string name,course,grade;
	float total,average;
	cout<<"=============================Intpit============================="<<endl;
	cout<<"|  Enter your ID :";
	cin>>id;
	cout<<"|  Enter your Name :";
	cin>>name;
	cout<<"|  Enter your Course :";
	cin>>course;
	cout<<"|  Enter your score of the subject S1 :";
	cin>>s1;
	cout<<"|  Enter your score of the subject S2 :";
	cin>>s2;
	cout<<"|  Enter your score of the subject S3 :";
	cin>>s3;
	cout<<"|  Enter your score of the subject S4 :";
	cin>>s4;
	cout<<"|  Enter your score of the subject S5 :";
	cin>>s5;
	cout<<"|  Enter your score of the subject S6 :";
	cin>>s6;
	cout<<"|  Enter your score of the subject S7 :";
	cin>>s7;
	cout<<"|  Enter your score of the subjcet S8 :";
	cin>>s8;
	cout<<"|  Enter your score of the subject S9 :";
	cin>>s9;
	cout<<"|  Enter your score of the subject S10 :";
	cin>>s10;
	cout<<"=========================================================="<<endl;
	
	total = s1+s2+s3+s4+s5+s6+s7+s8+s9+s10;
	average = total/10;
	
	if(total >0 && total <=50){
		grade = 'F';
	}else if(total >50 && total <=60){
		grade = 'E';
	}else if(total >60 && total <=70){
		grade = 'D';
	}else if(total > 70 && total <=80){
		grade = 'C';
	}else if(total > 80 && total <=90){
		grade = 'B';
	}else if(total > 90 && total <=100){
		grade = 'A';
	}else{
		grade = "Invaliad";
	}

	cout<<"=============================Output============================="<<endl;
	
	cout<<"ID\t"<<"Name\t"<<"Course\t"<<"S1\t"<<"S2\t"<<"S3\t"<<"S4\t"<<"S5\t"<<"S6\t"<<"S7\t"<<"S8\t"<<"S9\t"<<"S10\t"<<"Total\t"<<"Average\t\t\t"<<"Grade"<<endl;
	cout<<id<<"\t"<<name<<"\t"<<course<<"\t"<<s1<<"\t"<<s2<<"\t"<<s3<<"\t"<<s4<<"\t"<<s5<<"\t"<<s6<<"\t"<<s7<<"\t"<<s8<<"\t"<<s9<<"\t"<<s10<<"\t"<<total<<"\t"<<average<<"\t\t"<<grade<<"\t"<<endl;
	
	return 0;
	
	
	
}
