#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	int N1,conteo=0;
	

	
	do{
		cout<<"Ingrese un Numero " <<endl;
		cin>>N1;
		if(N1>0){
			
			conteo++;	
		}
	}while(N1!=0);
   
   cout<<"\nLos Nuemeros mayores a 0 introduciodos son " <<conteo <<endl;

	system("pause");
	
	
	return 0;
}