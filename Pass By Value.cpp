#include<iostream>
using namespace std;


int value(int v){
	v=23;
}

int main(){
	int w = 30;
	value(w);
	cout<<w<<endl;
	cout<<"v ="<<value(w)<<endl;
	return 0; 
}
