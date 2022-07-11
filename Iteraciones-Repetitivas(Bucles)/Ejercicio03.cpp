/*Realice un programa que pide datos al ususario y si el numero ingresado es mayor que 0 
luego toma el numero le saca su cuadrado y luego lo suma a los siguentes 10 numeros
mayores a 0 ingresados.

*/
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	
	int x=1,V1,V2=0,V3=0;
	//int cont=1;

  cout <<"Escribe un valor Entero " <<endl;
	
    do{
    	cin>>V1;
        
        if(V1>0 )
        {
          V2=pow(V1,2);
		  V3=V2+V3;	
		  x++;
		}
    	
	}while(x<=10);
	
	cout<<"La suma de los cuadrados de los 10 numeros mayores a 0 es " <<endl <<V3;
	
	cout<<"\n\n";
	
	getch();
	return 0;
}