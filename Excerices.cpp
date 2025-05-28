#include<iostream>
#include<fstream>
using namespace std;
class Book{
    private:
     string title,author,quality;
     int quantity,year,n;
     float price;
    public:
     fstream file;
     Book(){
        title ="Unknow";
        author ="Unknow";
        quality ="Unknow";
        quantity =0;
        year =0;
        price = 0.0;
     } 
     void Create_the_book(){
        file.open("exercise.txt",ios::out);
        cout<<"Enter size for input the book :";cin>>n;
        for(int i=0;i<n;i++){
            cout<<"Enter the Title    :";cin>>title;
            cout<<"Enter the Author   :";cin>>author;
            cout<<"Enter the quality  :";cin>>quality;
            cout<<"Enter the quantity :";cin>>quantity;
            cout<<"Enter the price    :";cin>>price;
            cout<<"Enter the year     :";cin>>year;
            file<<"\t"<<title<<"\t"<<quality<<"\t"<<quantity<<"\t"<<price<<"\t"<<year<<endl;
        }
        file.close();
     }
      void Display_the_book(){
        file.open("exercies.txt",ios::in);
        cout<<"========================= Display The Book =========================="<<endl;
        cout<<"The Title Of Book    :"<<title<<endl;
        cout<<"The Author Of Book   :"<<author<<endl;
        cout<<"The Quality Of Book  :"<<quality<<endl;
        cout<<"The Quantity of Book :"<<quantity<<endl;
        cout<<"The Price  Of Book   :"<<price<<endl;
        cout<<"The Year Of Book     :"<<year<<endl;
        file<<"\t"<<title<<"\t"<<quality<<"\t"<<quantity<<"\t"<<price<<"\t"<<year<<endl;
        file.close();
;      }
    
      void Add_the_Book(){
        file.open("exercies.txt",ios::app);
        cout<<"========================= ADDING The Book =========================="<<endl;
        cout<<"Enter The size For ADD :";cin>>n;
        for(int i=0;i<n;i++){
            cout<<"Enter The Title To ADD    :";cin>>title;
            cout<<"Enter The Author To ADD   :";cin>>author;
            cout<<"Enter The Quality To ADD  :";cin>>quality;
            cout<<"Enter The Quantity To ADD :";cin>>quantity;
            cout<<"Enter The Price To ADD    :";cin>>price;
            cout<<"Enter The Year To ADD     :";cin>>year;
            file<<"\t"<<title<<"\t"<<quality<<"\t"<<quantity<<"\t"<<price<<"\t"<<year<<endl;
        }
        file.close();
      }
     void Menu(){
        int choose;
        do{
            cout<<"======================================================================"<<endl;
            cout<<"                             System Book                              "<<endl;
            cout<<"======================================================================"<<endl;
            cout<<"1. Create the book"<<endl;
            cout<<"2. Display the book "<<endl;
            cout<<"3. Add the book "<<endl;
            cout<<"0. Exit the program "<<endl;
            cout<<"please choose an option ";cin>>choose;
            switch(choose){
                case 1:{
                    Create_the_book();

                    break;
                }
                case 2:{
                   Display_the_book();
                    break;
                }
                case 3:{
                   Add_the_Book();
                    break;
                }
                case 0:{
                    cout<<"================================================================"<<endl;
                    cout<<"                    Bye Bye see you agian  Baby                 "<<endl;
                    cout<<"================================================================="<<endl;
                    break;
                }

            }

        }while(choose != 0);
     }
};

int main(){
    Book obj;
    obj.Menu();
    return 0;

}