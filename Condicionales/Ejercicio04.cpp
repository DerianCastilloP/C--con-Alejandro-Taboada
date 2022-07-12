#include<iostream>

using namespace std;

int main(){
	float a;
	cout<<"Ingrese un Numero: ";
	cin >>a;
	
	if(a==0){
		
		cout<<"\nEl numero es 0";
		
	}else if(a>0){
		
		cout<<"\nEl numero es POSITIVO";
		
	}else{
		
		cout<<"\nEl numero es NEGATIVO";
		
	}
	
	
	
	return 0;
}