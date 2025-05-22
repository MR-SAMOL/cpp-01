		// Number 01
//#include<iostream>
//using namespace std;
//struct Hello{
//	string name;
//	int id;
//	char gender;
	
	
//};

//int main(){
//	struct Hello s;
//	s.name = "samol";
//	s.id = 999;
//	s.gender ='M';
	
//	cout<<"Name :"<<s.name<<endl;
//	cout<<"ID :"<<s.id<<endl;
//	cout<<"Gender :"<<s.gender<<endl;
//	return 0;
//}

				// Number 2
#include<iostream>
using namespace std;
struct Book{
	char title[40];
	string author;
	int create_at_year;
	float price;
}book1,book2;

int main(){
	// Input Book Information
	cout<<"Enter Book Title :";cin.getline(book1.title,40);
	cout<<"Enter Book Author :";getline(cin,book1.author);
	cout<<"Enter Book Price :";cin>>book1.price;
	cout<<"Enter Book Creat :";cin>>book1.create_at_year;
	// OutPut Book information
	
	cout<<"----------------------------------"<<endl;
	cout<<"Book Title :"<<book1.title<<endl;
	cout<<"Book Author :"<<book1.author<<endl;
	cout<<"Book Price :"<<book1.price<<endl;
	cout<<"Book Creat :"<<book1.create_at_year<<endl;
	
	
	return 0;
}
