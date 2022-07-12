
#include <iostream>
#include <math.h>

using namespace std;
//Ojo el codigo esta similar a el del profe pero los datos finales aveces no los muestra

int main(){
	
	float a,b,c, result=0,result2=0;
	cout<<"Dada la ecuacion cuadratica aX^2+bX+c=0";
	cout<<"\nIngrese los valores en su Lugar correspondiente" <<endl;
	cout<<"Ingrese el Valor de a: "; cin>>a;
	cout<<"\nIngrese el Valor de b: "; cin>>b;
	cout<<"\nIngrese el Valor de c: "; cin>>c;
	cout<<"\nla ecuacion a ejecutar es: " <<endl;
	cout <<a <<"X^2+" <<b <<"X+" <<c <<"=0" <<endl;
	
	result=(-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
    result2=(-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);

	cout<<"Los resultados son: " <<endl;
//	cout.precision(2);
	cout<<result <<endl;
//	cout.precision(2);
	cout<<result2 <<endl;
	
	
	
	return 0;
}