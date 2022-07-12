#include <iostream>


using namespace std;

int main(){
	
	
	int a,b,c, result=0;
	
	cout <<"Ingresa 3 numeros ";
	cin >>a >>b >>c;
	
	if (a==b && b==c){
		
		cout <<"\nLos Numeros Son Iguales ";
			
	}else if(a>=b && a>=c){
		
		cout<<"\nEl mayor es: " <<a;
	}else if(b>=a && b>=c){
		
		cout<<"\nEl Mayor es: " <<b;
	}else{
		
		cout<<"\nEl Mayor es: " <<c;
	}
	
	
	return 0;
}