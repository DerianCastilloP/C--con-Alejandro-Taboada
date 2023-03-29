#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int M1[3][3]={{4,3,5},{2,3,5},{8,5,9}};//tengo que entrarle valores a las matris
	int M2[3][3]={{1,5,1},{2,9,7},{1,1,1}};//tengo que entrarle valores a las matris
	int M3[3][3]={{},{},{}};
	
	cout << "\nPrimera Matris " << endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; ++j){	
			cout<<M1[i][j] <<"\t";
		}
		cout <<"\n";
	}
	
	cout << "\nSegunda Matris " << endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; ++j){
			
			cout<<M2[i][j] <<"\t";
	
		}
		cout <<"\n";
	}
	
	cout<<"\nMultiplicacion de las dos matrices anteriosres " << endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; ++j){				
			for(int k=0; k<3; k++){	
					M3[i][j] += M1[i][k] * M2[k][j];	
	        }	
	        cout << M3[i][j] <<"\t"; 
		}	
		cout <<"\n";
	}
	getch();
	return 0;
}