#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int F=3,C=3;
	int M1[100][100];
	srand(time(NULL));
	cout<<"\n\tMatriz original"<<endl;
	for(int i=0; i<F; i++){
		for(int j=0; j<C; j++){
			M1[i][j]= rand()%(100)+1;//para asignarle un numero aleatorio a la matrix
			cout<<M1[i][j] <<" ";
		}
		cout<<"\n";
	}
	cout<<endl;
	cout<<"\tMatriz transpuesta"<<endl;
	for(int i=0; i<F; i++){
		for(int j=0; j<C; j++){
		//	M1[i][j]= rand()%(100)+1;//para asignarle un numero aleatorio a la matrix
			cout<<M1[j][i] <<" ";
		}
		cout<<"\n";
	}
	
	
	
	system("pause");
	return 0;
}