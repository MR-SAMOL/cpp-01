									//ARRAY 2D EXP

#include<iostream>
using namespace std;
const int ROWS    =5;      // const can not change value 
const int COLUMNS =5;

void ViewSeat(char seat[ROWS][COLUMNS]){
	for (int i=0;i<ROWS;i++){
		for (int j=0;j<COLUMNS;j++){
			cout<<seat[i][j];
		}
		cout<<endl;
	}
}

void BookedSeat(char seat[ROWS][COLUMNS]){
	 int row,col;
	 cout<<"Enter row seat";cin>>row;
	 cout<<"Enter col seat";cin>>col;
	 
	 if (row>=0 && row<ROWS && col>=0 && col<COLUMNS){
	 	if (seat[row][col]=='0'){
	 		seat[row][col]='X';
	 		cout<<"Complate seat!"<<endl;
		 }
	 }else {
	 	cout<<"Invalid seat.we have only [0-4]"<<endl;
	 }
}

void RemoveSeat(char seat [ROWS][COLUMNS]){
	int row,col;
	cout<<"Enter the ROWS for remove :";cin>>row;
	cout<<"Enter the COLUMNS for remove :";cin>>col;
	
	if (row>=0 && row<ROWS && col>=0 && col<COLUMNS){
		if (seat [row][col]=='X'){
			seat[row][col]='0';
			cout<<"Remove complatly!"<<endl;
		}
	}
}



int main(){
	char seat [ROWS][COLUMNS];
	// change seat to 0
	int op;
	for (int i=0;i<ROWS;i++){
		for(int j=0;j<COLUMNS;j++){
			seat[i][j]='0';
		}
	}
	
	do{
		cout<<"************************[Movie system seat]********************"<<endl;
		cout<<"[1. Views Seat"<<endl;
		cout<<"[2. Booked Seat"<<endl;
		cout<<"[3. Remove Seat"<<endl;
		cout<<"[0. Exit Program"<<endl;
		cout<<"[ => Choose an option :";cin>>op;
		switch (op){
			case 0:{
				cout<<"Exit Program"<<endl;
				break;
			}
			case 1:{
				ViewSeat(seat);
				break;
			}
			case 2:{
				BookedSeat(seat);
				break;
			}
			case 3 :{
				RemoveSeat(seat);
				break;
			}
		}
	}while(op!=0);
}

