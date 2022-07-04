#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	int cat1,cat2;
	int hipo=0;
	
	cout <<"Escriba el cateto 1 " <<endl; cin>>cat1;
	cout <<"\nEscriba el Cateto 2 " <<endl; cin>>cat2;
	//mi solucion estaba erronea tenia que agregar una libreria nueba que es math.h
	hipo=sqrt((cat1*cat1)+(cat2*cat2));
		
	cout<<"\nLa Hipotenusa es la rais cuadrada de " <<hipo;
	

	cout <<"\nLa Hipotenusa es " <<hipo;
	
	
	
	
	
return 0;	
}