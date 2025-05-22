#include<iostream>
using namespace std;


class Book{
	private :
		string title,author;
		float price;
	public :
		void SetTitle(string name){
			title = name;
		}
		 string GetTitle(){
		 	return title;
		 }
		 void SetAuthor(string bb){
		 	author = bb;
		 }
		   string GetAuthor(){
		   	return author;
		   }
		   void SetPrice(float Value){
		   	price = Value;
		   }
		     float GetPrice(){
		     	return price;
			 }
		 
	
};

int main(){
	Book obj;
	obj.SetTitle("c++ Programmimg");
	obj.SetAuthor("Vanda");
	obj.SetPrice(500);
	cout<<obj.GetTitle()<<endl;
	cout<<obj.GetAuthor()<<endl;
	cout<<obj.GetPrice()<<endl;
	
}

/*class Person{
	private :
	    string name;
	    int id;
	    char gender;
	    
	   public :
	      void InputDate(){
	      	cout<<"Enter Name   :";cin>>name;
	      	cout<<"Enter ID     :";cin>>id;
	      	cout<<"Enter Gender :";cin>>gender;
		  } 
		  
		  void DisplayDate(){
		  	cout<<"Name   :"<<name<<endl;
		  	cout<<"ID     :"<<id<<endl;
		  	cout<<"Gender :"<<gender<<endl;
		  }
};

int main(){
	Person obj;
	obj.InputDate();
	obj.DisplayDate();
	
	return 0;
}*/
