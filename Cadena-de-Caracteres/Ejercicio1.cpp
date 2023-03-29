#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char caracter[20] = "";
	int Numline =0;
	
	cout<<"Ingrese un conjunto de caracteres de su preferencia que exceda de 10"<<endl;
	
	cin.getline(caracter, 20, '\n');
	
	Numline= strlen(caracter);
	
	if (Numline > 10){
		
		cout<<"\n"<<caracter<<endl;
		
	}else{
		
		cout<<"\nNo cumples con la cantidad de caracteres pedidos "<<endl;
	}

	system("pause");
	return 0;
}