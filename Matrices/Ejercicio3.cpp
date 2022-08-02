#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int Matrix[2][2]={{1,2},{3,4}},Matrix2[2][2];
	//************************************
	for(int i=0; i<2; i++){
		for(int j=0; j<2;j++){
			Matrix2[i][j]=Matrix[i][j];
		}
	}
	//***********************
	cout<<"Matrix 1 "<<endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2;j++){
			cout<<Matrix[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n\n";
	cout<<"Matrix 2"<<endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<Matrix2[i][j];
		}
		cout<<"\n";
	}
	
	
	getch();
	return 0;
}