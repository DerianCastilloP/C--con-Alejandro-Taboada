#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int N,C=0,S=0;
	cout<<"Ingrese un valor ";
	cin>>N;
	
	for(int i=1;i<=N;i++){
		
		//C analizamos cualos son pares he impares para verlos en las condiciones
		C=i%2;
		
		if(C==0){
			
			S-=i;
			//para inprimir los valores no necesario para el resultado
			if(i==N){
				cout<<i;
			}else{
				cout<<i<<"+";	
			}
			//fin de la impresion		
		}else{	
			S+=i;
			//para inprimir los valores no necesario para el resultado
			if(i==N){
				cout<<i;
			}else{
				cout<<i<<"-";	
			}
			//fin de la impresion
		}		
		
	}
	cout<<"\n\n"<<S<<endl;
	
	
	system("pause");
	return 0;
	
}