#include<iostream>
using namespace std;
int main(){
    int n;
    int i=0;
    string sum;
   cout<<"Enter the size you want love :";cin>>n;
    for(int i=0;i<n;i++){
        cout<<" I Love You "<<i+1<<endl;
    }
    cout<<"Enter Your size of love :";cin>>n;
    while(i<n){
        cout<<" I love You Too  "<<i+1<<endl;
        ++i;
    }
    
     do{
           cout<<"Do You Love me !!"<<endl;
           cout<<" Yes/ No :";
           cin>>sum;
     }while(sum!="No");
    return 0;
}

// Note ចំណុចកំណត់ចំណាំ            LOOP STATEMET!! 
// LOOP HAS 3!!
// 1. for loop
// 2. while loop
// 3. do while loop
// ==> It's use to the show Data or valude agian and agian
// ==> Before it work It's cheak the condiction first and appy statement
// ==> Loop ប្រើសម្រាប់គ្រប់គ្រង និងបង្ហាញទិន្ន័យដដែលៗ
// ==>​ មុននិងវាអនុវត្តន៍ ឬ បង្ហាញទិន្ន័យណាមួយវាក៏ត្រូវពិនិត្យលខណ្ឌផងដែរ វាស្រដៀងទៅនិង Control Statement
// What is Break and Continue?
// ==> break is a keyword for stop the loop
// ==> continue is a keyword for skip the loop 
// ==> break គឺជាពាក្យគន្លឹះមួយដែលប្រើសម្រាប់ បញ្ឈប់ Loop​ អោយឈប់ដំណើរការ
// ==> continue គឺជាពាក្យគន្លឹះមួយដែលប្រើសម្រាប់​ រំលង loop នៅចំណុចណាមួយ
// What is goto+label!!
// ==> goto is a keyword use for cntrol proccesing code to label after work from the label it's show the data down
// ==> label is use for note map of goto work whith it