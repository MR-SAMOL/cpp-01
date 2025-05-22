#include<iostream>
using namespace std;

class Book{
	
	pirvate :
		string title,author,public_date;
		float price;
	public :
		Book(){
			title = "Unknow Name";
			author = "Unknow Author";
			public_date = "Unknow";
			price = 00;
		}
		
		 Book(string t,string a,string pd,float p){
		 	this->titel = t;
		 	this->author = a;
		 	this->public_date = pd;
		 	this->price = p;
		 }
		  void Display_Book(){
		  	cout<<"Title Book :"<<title<<endl;
		  	cout<<"Author Book :"<<author<<endl;
		  	cout<<"Public Book :"<<public_date<<endl;
		  	cout<<"Price Book :"<<price<<endl;
		  }
};

int main(){
	Book book;
	book.Display_Book();
	string name_title,name_author,public_date;
	float pirce_book;
	cout<<"Enter Title Book :";getline(cin,name_title);
	cout<<"Enter Author Book :";getline(cin,name_author);
	cout<<"Enter Public Date :";getline(cin,public_date);
	cout<<"Enter Price Book  :";cin>>price_book;
	
}
