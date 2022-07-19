#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float a, result=0;
	
	cout<<"Ingrese el precio a costo de un Producto " <<endl;
	cin>>a;
	
	result=a+(a*0.18);
	cout<<"\nEL Producto con 18% de IVA es igual a $"<<result <<endl;
	
	getch();
	return 0;
}