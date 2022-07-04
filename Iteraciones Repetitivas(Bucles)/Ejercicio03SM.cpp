/*Realizar un programa que calcule y muestre en la salida estandar la suma de
los cuadrados de los primeros 10 numeros mayores a 0

*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	
	int x,V1,V2=0;
	//Esta es la solucion del profesor yo crei que se necesitaba ingresar los 
	//numeros manualmente y realice el Ejercicio3.cpp
for(x=1;x<=10;x++){
	
	V1= pow(x,2);
	
	V2+=V1;

}
 
	cout<<"La suma de los cuadrados de los 10 numeros mayores a 0 es " <<endl <<V2;
	
	cout<<"\n\n";
	
	getch();
	return 0;
}