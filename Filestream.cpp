// File stream has 3 point
// 1. file open 
// 2. red, write file
// 3. ofstream : Create / Write
// ifstream :Display/ read
// fstream : Write / read
// - ios :: app = add
// - ios :: ate = pointer
// - ios :: in  = display
// - ios :: out = create
//                                              OFSTREAM
/*#include<iostream>
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
        file << name     <<"     "<<     id      <<"        "<<      salary      <<"         "<<     gender;
    }else{
        cout<<"Error open file"<<endl;
    }
    file.close();
    return 0;
}*/

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ifstream file;// ifstream is a read file
//     file.open("Example.txt");
//     string line;
//     while(getline(file,line)){
//         cout<<line<<endl;
//     }
//     file.close();
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     fstream file;
//     file.open("Example.txt",ios::in);
//     string line;
//     while (getline(file,line)){
//         cout<<line<<endl;
//     }
//     file.close();
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     fstream file ("Example.txt",ios::in | ios::ate);
//     file.seekg(0);
//     string line;
//     cout<<"Hello :"<<endl;
//     while(getline(file,line)){

//         cout<<line<<endl;
//     };
//     file.close();
//     return 0;
// }
#include<iostream>
#include <fstream>
using namespace std; 

int main() {
    ofstream file("example.bin",ios::out | ios::binary);

    if (file.is_open()) {
        int data = 1234;
        string name = "Hello";
        file.write(reinterpret_cast<char*>(&data), sizeof(data));
        file.close();
    }

    return 0;
}
