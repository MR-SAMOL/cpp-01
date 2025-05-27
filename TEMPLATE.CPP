#include<iostream>
using namespace std;
// Template has 2:
//     1. Template class
//     2. Template Funtion
// Examples Class Student
// >> Note The Template can create only one class!
// >> If you create 2 class your code is will be ERROR!!
template <typename S,typename I,typename F>
class Student{
    private:
    int id,age;
    string name,gender,classroom,grade;
    float salary;
    public:
    void SetData(int i,int a,string n,string g,string cs,string gd,float s){
        id = i;
        age = a;
        name = n;
        gender = g;
        classroom = cs;
        grade = gd;
        salary = s;
    }
    I GetData(I p){
        return p;
    }
    S GetData(S h){
        return h;
    }
    F GetData(F k){
        return k;
    }
};

 int main(){
    Student<int ,string ,float>st;
    cout<<"Student Name   :"<<st.GetData("TATA")<<endl;
    cout<<"Student ID     :"<<st.GetData(865)<<endl;
    cout<<"Student Gender :"<<st.GetData("Male")<<endl;
    cout<<"Student Age    :"<<st.GetData(18)<<endl;
    cout<<"Student Grade  :"<<st.GetData("A")<<endl;
    cout<<"Student Room   :"<<st.GetData("Etect center")<<endl;
    cout<<"Student Salary :"<<st.GetData(1245)<<endl;
    return 0;
 }