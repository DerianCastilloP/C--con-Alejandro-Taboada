#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	cout<<"col "; 
	int F=0;
	cin >>F;
	cout<<"columna ";
	int C=0;
	cin >>C;
	
	int M1[F][C]={{},{},{}};//tengo que entrarle valores a las matris
	int M2[F][C]={{},{},{}};//tengo que entrarle valores a las matris
	int M3[F][C]={{},{},{}};
	
	cout << "\nPrimera Matris " << endl;
	
	for(int i=0; i<F; i++){
		for(int j=0; j<C; ++j){
			cin>>M1[i][j] ;//"\t";
			//cout<<M1[i][j] <<"\t";
		}
		cout <<"\n";
	}
	
	cout << "\nSegunda Matris " << endl;
	
	for(int i=0; i<F; i++){
		for(int j=0; j<C; ++j){
			cin>>M2[i][j]; //<<"\t";
			//cout<<M2[i][j] <<"\t";
	
		}
		cout <<"\n";
	}
	
	cout<<"\nMultiplicacion de las dos matrices anteriosres " << endl;
	for(int i=0; i<F; i++){
		for(int j=0; j<C; ++j){			
			for(int k=0; k<F; k++){	
					M3[i][j] += M1[i][k] * M2[k][j];	
	        }	
	        cout << M3[i][j] <<"\t"; 
		}	
		cout <<"\n";
	}
	

	
	getch();
	return 0;
}