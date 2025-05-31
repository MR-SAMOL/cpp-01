#include<iostream>
using namespace std;
// Functio Lesson 
// Function Has 2
// None return
// return Function
// and Function None return with paramater
//                  Function None return
int id,age;
string name,gender,salary;
void Input(){
    cout<<"\033[0;33mFUNCTION NONE RETURN !!\033[0m"<<endl;
    cout<<"Enter Your Name   :";cin>>name;
    cout<<"Enter Your ID     :";cin>>id;
    cout<<"Enter Your Age    :";cin>>age;
    cout<<"Enter Your Gender :";cin>>gender;
    cout<<"Enter Your Salary :";cin>>salary;
}
// Dispaly Function 
void Display(){
    cout<<"My Name Is   :"<<name<<endl;
    cout<<"My ID Is     :"<<id<<endl;
    cout<<"My Age Is    :"<<age<<endl;
    cout<<"My Gender Is :"<<gender<<endl;
    cout<<"My Salary Is :"<<salary<<endl;
}
//                              Function return or return Function!!
string Hello(){
    cout<<"\033[0;32mFUNCTION RETURN OR RETURN FUNCTION !!\033[0m"<<endl;
    return "Hello World !";
}
//                              Function Noone return with paramater !!
void Move(int i,int a,string n){
    cout<<"\033[0;31mFUNCTION NONE RETURN WITH PARAMATER !!\033[0m"<<endl;
    cout<<"Your ID   :"<<i<<endl;
    cout<<"Your Age  :"<<a<<endl;
    cout<<"Your Name :"<<n<<endl;
}

int main(){
    // Calling Function
    // None return
    Input();
   Display();
    // return Function
    string Love =Hello();
    cout<<Love<<endl;
    // Function with paramater
    Move(12,23,"DATa");
    return 0;
}