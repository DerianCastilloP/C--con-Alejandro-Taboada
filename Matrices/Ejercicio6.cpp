#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int F=3,C=3;
	int M1[100][100],M2[100][100],M3[100][100];
	srand(time(NULL));
	cout<<"\n\tMatriz 1"<<endl;
	for(int i=0; i<F; i++){
		for(int j=0; j<C; j++){
			M1[i][j]= rand()%(100)+1;//para asignarle un numero aleatorio a la matrix
			cout<<M1[i][j] <<"  ";
		}
		cout<<"\n";
	}
		cout<<"\n\tMatriz 2"<<endl;
	for(int i=0; i<F; i++){
		for(int j=0; j<C; j++){
			M2[i][j]= rand()%(100)+1;//para asignarle un numero aleatorio a la matrix
			cout<<M2[i][j] <<"  ";
		}
		cout<<"\n";
	}
		cout<<"\nSuma de Matrices"<<endl;
	for(int i=0; i<F; i++){
		for(int j=0; j<C; j++){
			//M2[i][j]= rand()%(100)+1;//para asignarle un numero aleatorio a la matrix
			M3[i][j]=M2[i][j]+M1[i][j];
			cout<<M3[i][j] <<"  ";
		}
		cout<<"\n";
	}
	
	cout<<endl;
	system("pause");
	return 0;
}