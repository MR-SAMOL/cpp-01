#include<iostream>
using namespace std;
int main(){
	// input
	cout<<"====================================Input======================="<<endl;
	int a[5];
	for(int i = 0;i<5;i++){
		cout<<"Enter value a["<<i<<"] :";
		cin>>a[i];
	}
	
	//cout<<"Value a[0] ="<<a[0]<<endl;
	//cout<<"Value a[1] ="<<a[1]<<endl;
	// output
	cout<<"====================================Output========================"<<endl;
	int k = 0;
	while (k<5){
		cout<<"Value a["<<k<<"] :"<<a[k]<<endl;
		k++;
	}
	return 0;
}
   
