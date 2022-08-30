#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int F,C;
	int Matrix[100][100], Matrix2[100][100];
	
	srand(time(NULL));//para cambiar la semilla del rand() y sea aleatorio en cada ejecucion
	
	cout<<"Ingrese el numero de Filas "<<endl;
	cin>>F;
	cout<<"Ingrese el numero de Columnos "<<endl;
	cin>>C;
	
	for(int i=0; i<F; i++){
		for(int j=0; j<C; j++){
			Matrix[i][j]= rand()%(100)+1;//para asignarle un numero aleatorio a la matrix
		}
	}
	for(int i=0; i<F; i++){
		for(int j=0; j<C; j++){
			Matrix2[i][j]= Matrix[i][j];
		}
	}
	for(int i=0; i<F; i++){
		for(int j=0; j<C; j++){
			cout<<Matrix2[i][j] <<"\t";
		}
		cout<<"\n";
	}
	
	
	
	system("pause");
	return 0;
}