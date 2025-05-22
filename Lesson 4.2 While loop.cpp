#include<iostream>
using namespace std;
int main(){
	int num,i=0,sum=0;
	cout<<"Enter your number :";
	cin>>num;
	while(i<num){
		cout<<i<<endl;
		sum+=i;
		i++;
	}
	cout<<"result :"<<sum<<endl;
	
}
