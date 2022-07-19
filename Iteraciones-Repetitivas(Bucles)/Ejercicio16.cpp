//ejercicio 16
//no llegue al resultado y vi la solucion de Alejandro
//Era mas facil de lo que crei. 
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int N;
	
	cout<<"Ingrese un valor ";
	cin>>N;
	
	for( int i=2; N>1; i++){
		while(N%i==0){
			cout<<" " <<i;
			N = N/i;
		}
	}
	
	getch();
	return 0;
}