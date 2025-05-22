#include<iostream>
using namespace std;
int main(){
	int op;
	cout<<"===============[Choose Options]==================="<<endl;
	cout<<"1. Coca Cola"<<endl;
	cout<<"2. Pepsi"<<endl;
	cout<<"3. ABC"<<endl;
	cout<<"4. Champian"<<endl;
	cout<<"5. Exit"<<endl;
	cin>>op;
	switch (op)
	{
		case 1:{
			cout<<"Coca Cola selected"<<endl;
			break;
		}case 2:{
			cout<<"Pepsi selected"<<endl;
			break;		
		}
		case 3:{
			cout<<"ABC selected"<<endl;
			break;
		}case 4:{
			cout<<"Champian selected"<<endl;
			break;
		}case 5:{
			cout<<"Exiting ......."<<endl;
			return 0;
		}
		default :{
			cout<<"invalid choice agint"<<endl;
			break;
		}
	}

return 0;












}
