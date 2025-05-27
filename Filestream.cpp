// File stream has 3 point
// 1. file open 
// 2. red, write file
// 3. ofstream : Create / Write
// ifstream :Display/ red
// fstream : Write / red
// - ios :: app = add
// - ios :: ate = pointer
// - ios :: in = display
// - ios :: out = create

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file;// create an object of fstream class
    // open file
    file.open("Example.txt");
    int id;
    string name;
    float salary;
    char gender;
    cout<<"Enter Name   :";cin>>name;
    cout<<"Eentr ID     :";cin>>id;
    cout<<"Enter Salary :";cin>>salary;
    cout<<"Enter Gender :";cin>>gender;
    if (file){
        cout<<"File opened scuccessfully"<<endl;
        file << name    <<"     "<<     id      <<"        "<<      salary      <<"         "<<     gender;
    }else{
        cout<<"Error open file"<<endl;
    }
    file.close();
    return 0;
}