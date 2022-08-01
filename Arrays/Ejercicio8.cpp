#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int V1[5],V2[5];
	int n;
	cout<<"Ingrese los numeros del arreglo " <<endl;
	
	for(int i=0; i<5; i++){
		cin>>n;
		V1[i]=n;
	}
	cout<<"El segundo arreglo es " <<endl;
	for(int i=0; i<5; i++){

		V2[i]= V1[i]*2;
		cout <<V2[i] <<endl;
	}
	

	
	
	system("pause");
	return 0;
}