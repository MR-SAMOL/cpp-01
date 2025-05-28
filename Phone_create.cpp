#include<iostream>
#include<fstream>
using namespace std;
class Phone{
    private:
     int number,code,quantity,z;
     string name,quality;
     float price;
    public:
     fstream file;
     Phone(){
        name = "Unknow";
        quality = "Unknow";
        quantity =0;
        number = 0;
        code = 0;
        price = 0.0;
     } 
     void Phone_create(){
        file.open("exercie.txt",ios::out);
        cout<<"ENTER THE SIZE FRO CREATE :";cin>>z;
        for(int i=0;i<z;i++){
            cout<<"Enter Phone Name     :";cin>>name;
            cout<<"Enter Phone Code     :";cin>>code;
            cout<<"Enter Phone Number   :";cin>>number;
            cout<<"Entr  Phone Quality  :";cin>>quality;
            cout<<"Enter Phone Quantity :";cin>>quantity;
            cout<<"Enter Phone Price    :";cin>>price;
            cout<<"\t"<<name<<"\t"<<code<<"\t"<<quality<<"\t"<<quantity<<"\t"<<price<<endl;
        }
          file.close();
    }
        void Phone_Display(){
            file.open("exercie",ios::app);
            cout<<"======================================================================"<<endl;
            cout<<"\033[0;32;5m                                PHONE IS DISPLAY NOW                \033[0m"<<endl;
            cout<<"PHONE NAME     :"<<name<<endl;
            cout<<"PHONE CODE     :"<<code<<endl;
            cout<<"PHONE NUMBER   :"<<number<<endl;
            cout<<"PHONE QUALITY  :"<<quality<<endl;
            cout<<"PHONE QUANTITY :"<<quantity<<endl;
            cout<<"PHONE PRICE    :"<<price<<endl;
            file.close();

        }
        void Phone_Add(){
            file.open("exercie.txt",ios::app);
            cout<<"======================================================================"<<endl;
            cout<<"\033[0;33m                                 PHONE IS ADDING                       \033[0m"<<endl;
            for(int i=0;i<z;i++){
                cout<<"NAME OF PHONE IS ADDING     :";cin>>name;
                cout<<"CODE OF PHONE IS ADDING     :";cin>>code;
                cout<<"NUMBER OF PHONE IS ADDING   :";cin>>number;
                cout<<"QUALITY OF PHONE IS ADDING  :";cin>>quality;
                cout<<"QUANTITY OF PHONE IS ADDING :";cin>>quantity;
                cout<<"PRICE OF PHONE IS ADDING    :";cin>>price;
                cout<<"\t"<<name<<"\t"<<code<<"\t"<<quality<<"\t"<<quantity<<"\t"<<price<<endl;
            }
            file.close();
        }
    
       void Phone_Menu(){
        int choose;
        do{
            cout<<"========================================================================"<<endl;
            cout<<"\033[0;31;43m                           PHONE SYSTEM                                \033[0m "<<endl;
            cout<<"========================================================================"<<endl;
            cout<<"1. Create Phone"<<endl;
            cout<<"2. Dispaly Phone"<<endl;
            cout<<"3. Add Phone"<<endl;
            cout<<"0. EXIT THE MENU PHONE PROGRAM !!"<<endl;
            cout<<"PLEASE CHOOSE AN OPTION FOR PHONE!! :";cin>>choose;
            switch(choose){
                case 1:{
                    Phone_create();
                    break;
                }
                case 2:{
                    Phone_Display();
                    break;
                }
                case 3:{
                    Phone_Add();
                    break;
                }
                case 0:{
                    cout<<"====================================================================="<<endl;
                    cout<<"\033[0;34m                     BYE BYE SEE NEXT TIME!!             \033[0m"<<endl;
                    break;
                }
            }
         }while(choose!=0);
    }
};
int main(){
     Phone obj1;
    obj1.Phone_Menu();
    return 0;
}

