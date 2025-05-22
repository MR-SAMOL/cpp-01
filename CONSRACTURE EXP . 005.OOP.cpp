#include<iostream>
using namespace std;

// CLASS 

class Employee{
	private :
		int code,size;
		string name;
		float salary;
		char sex;
	public :
	 
	 void Input(){
	 	cout<<"=====================================[Input]==================================="<<endl;
	 	cout<<"Enter Name   :";cin>>name;
	 	cout<<"Enter Code   :";cin>>code;
	 	cout<<"Enter Sex    :";cin>>sex;
	 	cout<<"Enter Salary :";cin>>salary;
	 	cout<<"------------------------------------------------------------------------------"<<endl;
	  }	
	 
	 void Output(){
	 	cout<<"Name   :"<<name<<endl;
	 	cout<<"Code   :"<<code<<endl;
	 	cout<<"Sex    :"<<sex<<endl;
	 	cout<<"Salary :"<<salary<<endl;
	 }
		void Search(){
			int search, searchName,searchCode,searchSex,searchSalary;
			cout<<"=====================================[Search]=================================="<<endl;
			cout<<"1. Search Name   ."<<endl;
			cout<<"2. Search Code   ."<<endl;
			cout<<"3. Search Sex    ."<<endl;
			cout<<"4. Search Salary ."<<endl;
			cout<<"Choose Option For Search .";cin>>search;
			
			switch (search){
				case 1 :{
					int size;
					cout<<"=====================================[Search]=================================="<<endl;
					cout<<"Enter Name You wan to search :";
					cin>>searchName;
					cout<<"Name   :"<<endl;
					cout<<"Code   :"<<endl;
					cout<<"Sex    :"<<endl;
					cout<<"Salary :"<<endl;
					for (int i=0;i<size;i++){
						if (code[i]==searchName){
						cout<<"Name   :"<<name[i]<<endl;
						cout<<"Code   :"<<code[i]<<endl;
						cout<<"Sex    :"<<sex[i]<<endl;
						cout<<"Salary :"<<salary[i]<<endl;
						}else {
							cout<<"Name Not Found!.\n";
						}
					}
					break;
				}
				case 2:{
					cout<<"=====================================[Search]=================================="<<endl;
					cout<<"Enter Code You wan to search :";
					cin>>searchCode;
					cout<<"Name   :"<<endl;
					cout<<"Code   :"<<endl;
					cout<<"Sex    :"<<endl;
					cout<<"Salary :"<<endl;
					 for (code[i]==searchCode){
					 	cout<<"Name   :"<<endl;
					 	cout<<"Code   :"<<endl;
					 	cout<<"Sex    :"<<endl;
					 	cout<<"Salary :"<<endl;
					 }else{
					 	cout<<"Code Not Found!.\n";
					 }
					break;
				}
				case 3:{
					cout<<"=====================================[Search]=================================="<<endl;
					cout<<"Enter Sex You wan to search :";
					cin>>searchSex;
					cout<<"Name   :"<<endl;
					cout<<"Code   :"<<endl;
					cout<<"Sex    :"<<endl;
					cout<<"Salary :"<<endl;
					 for (code[i]==searchSex){
					 	cout<<"Name Search By Sex  :"<<endl;
					 	cout<<"Code Search By Sex  :"<<endl;
					 	cout<<"Sex  Search By Sex  :"<<endl;
					 	cout<<"Salary Search By Sex:"<<endl;
					 }else{
					 	cout<<"Sex Not Found!.\n";
					 }
					break;	
		     	}
		     	case 4:{
					cout<<"=====================================[Search]=================================="<<endl;
					cout<<"Enter Salary You wan to search :";
					cin>>searchSalary;
					cout<<"Name   :"<<endl;
					cout<<"Code   :"<<endl;
					cout<<"Sex    :"<<endl;
					cout<<"Salary :"<<endl;
					 for (code[i]==searchSalary){
					 	cout<<"Name Search By Salary  :"<<endl;
					 	cout<<"Code Search By Salary  :"<<endl;
					 	cout<<"Sex  Search By Salary  :"<<endl;
					 	cout<<"Salary Search By Salary:"<<endl;
					 }else{
					 	cout<<"Salary Not Found!.\n";
					 }
					break;
				}
			}
		}
			void Update(){
				int update, updateName,updateCode,updateSex,updateSalary;
				cout<<"=====================================[Update]=================================="<<endl;
				cout<<"5. Update Name  ."<<endl;
				cout<<"6. Update Code  ."<<endl;
				cout<<"7. Update Sex   ."<<endl;
				cout<<"8. Update Salary ."<<endl;
				cout<<"Choose Option For Update! .";
				cin>>update;
			}
	};	
