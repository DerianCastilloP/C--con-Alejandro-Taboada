#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	int V1,V2=0;
	do{
		cout<<"INGRESA UN VALOR " <<endl;cin>>V1;
		
		if(V1>0){
			
			V2+=V1;
		}

	}while((V1!=0) && ((V1<20) || (V1>30)));
	

	cout<<"\nLa suma de los Numeros Introducidos mayores a 0 es " <<V2 <<endl;
	
	system("pause");
	return 0;
}