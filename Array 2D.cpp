//							Array 2D
#include<iostream>
using namespace std;
int main(){
	// syntax Array 2D
	// Datatype Array [Size] [Size]
	
	int A[3][6]={
				{0,1,2,3,4,5,},
				{6,7,8,9,10,11,},
				{12,13,14,15,16,17,}
	}; 
	// int put value to varibale 'A'
	for(int i=0;i<3;i++){
		for(int j=0;j<6;j++){
			cout<<"Ebter value : ";cin>>A[i][j];
		}
	}
	
	// output by loop
	for (int i=0;i<3;i++){
		cout<<"Slot : ["<<i<<"]";
		for(int j=0;j<6;j++){
			cout<<"\t a ["<<j<<"] = "<<A[i][j];
		}
		cout<<endl;
	}
	

	
	//cout<<A[1][4]<<endl;
	//cout<<A[0][4];
	return 0;
}
