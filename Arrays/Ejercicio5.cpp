#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int P,M=0;
	
	cout<<"Ingrese la cantidad de numeros que quiere ingresar ";
	cin>>P;
	
	int Ns[P];
	
	for(int i=0; i<P; i++){
		cout<<"\nIngrese el Numero "<<i+1 <<endl;
		cin>>Ns[i];
		 if(Ns[i]>=M){
		 	
		 	M=Ns[i];
		 }	
	}

	cout<<"\nEl Elemento mayor del Vector es "<<M <<endl;
	cout<<"\n";
	system("pause");
	return 0;
}