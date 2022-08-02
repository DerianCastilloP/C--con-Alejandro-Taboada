#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int Matrix[100][100],filas,colum;
	
	cout<<"Cual va hacer el numero de filas " <<endl;
	cin>>filas;
	cout<<"Cual va hacer el numero de columnas "<<endl;
	cin>>colum;
	cout<<"\n";
	cout<<"\t*****************************************************************"<<endl;
	cout<<"\t*la posicion de las filas y columnas se reprensetara asi [0][2] *"<<endl;
	cout<<"\t*En el ejemplo anterio la primera fila es en la posicion 0      *"<<endl;
	cout<<"\t*Y la columna esta en la posicion 3                             *"<<endl;
	cout<<"\t*****************************************************************"<<endl;
	cout<<"\n";
	
	for(int i=0; i<filas; i++){
		
		for(int j=0; j<colum; j++){
			cout<<"Ingresa el Dato de la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>Matrix[i][j];
		}	
	}
	cout<<"\n";
	cout<<"\nMatrix "<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<colum; j++){
			cout<<"\t"<<Matrix[i][j];
	        cout<<"\t";
		}	
	    cout<<"\n\n";
	}
	
	
	system("pause");
	return 0;
}