#include<iostream>
using namespace std;
// create a program for store item

string name;
int id,qty;
float price,tax,dis,pay;


void InputItem(){
    cout<<"Enter Item Name: ";
    cin>>name;
    cout<<"Enter Item ID: ";
    cin>>id;
    cout<<"Enter Item Quantity: ";
    cin>>qty;
    cout<<"Enter Item Price: ";
    cin>>price;
}

float CalTotal(){
    return qty * price;
}

float CalTax(){
    tax = 0.05;
    return CalTotal() * tax;
}

float CalDis(){
    float total = CalTotal();
    dis =   (total > 1   && total <=100 ) ? 10 :
            (total > 100 && total <= 200) ? 20 :
            (total > 200 && total <= 300) ? 30 : 
            (total > 300 && total <= 400) ? 40 : 
            (total > 400) ? 50 :
            0;
    return total * dis / 100;
}

float CalPay(){
    return CalTotal()-CalDis()+CalTax();
}

void DisplayItem(){
      cout<<InputItem<<endl;
}

int main(){
    InputItem();
   


    return 0;

}
