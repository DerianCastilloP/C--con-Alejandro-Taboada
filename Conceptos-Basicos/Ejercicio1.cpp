/*1.Escribe 2 pumeros y suma, resta, multiplicacion y divicion.

*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	float a,b, result=0;
	
	cout<<"Ingrese dos numeros "<<endl;
	cin>>a >>b;
	//suma
	result=a+b;
	cout<<"La suma es "<<result <<endl;
	//resta
	result=a-b;
	cout<<"La resta es "<<result <<endl;
	//multiplicacion
	result=a*b;
	cout<<"La multiplicacion es "<<result <<endl;
	//divicion
	result=a/b;
	cout<<"La divicion es "<<result <<endl;
	
	
	
    getch();	
	return 0;
}