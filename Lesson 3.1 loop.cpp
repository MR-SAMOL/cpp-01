#include<iostream>
using namespace std;
int main(){
	int i;
	cout<<"\033[42mWhat do you want for loop :";
	cin>>i;
	for(int k=1;k<i;k++){
		cout<<"\033[32m I Love you\033[0m"<<endl;
	}
	
	
	
	
	
	return 0;
}
