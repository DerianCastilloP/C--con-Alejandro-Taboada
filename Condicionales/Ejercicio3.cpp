#include <iostream>

using namespace std;

int main(){
	
	int a, result=0;
	
	cout <<"Ingresa un Numero: " ;cin>>a;
	 
	result=a%2;
	//ojo nos falto agregar si el numero era 0
	
	if (result==0){
		
		cout<<"\nEl numero Ingresado es Par";
		
	}else{
		
		cout<<"\nEl numero Ingresado es Impar";
		
	}
	
	/*El profesor en ves de declarar la variable result lo que hizo fue
		cout <<"Ingresa un Numero: " ;cin>>a;
	 	if (a%2==0){
		
		cout<<"\nEl numero Ingresado es Par";
		
	}else{
		
		cout<<"\nEl numero Ingresado es Impar";
		
	} 
	es mas optimo y nos ahorramos una variable inecesaria
	*/
	
	
	return 0;
}