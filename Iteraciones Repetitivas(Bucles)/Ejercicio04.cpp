/*4.Escriba un programa que tome cada 4 horas la temperatura exterior,
leyendola durante un periodo de 24 horas(o la que ingreses). es decir debe leer 6 temperaturas.
Calcule la temperatura media del dia,la temperatura mas alta y la mas baja.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int T1,TT,d;//(T1 Y TT)valores enteros para medir el tiempo y (d)contar cuantas veces se midio el tiempo
	float TP,TP2=0,result=0,min=0,may=0;//valores para alvergar la temperatura (TP y TP2)/Los demas son para alegar los resultados
	d=0;
	TT=24;//por si queremos cambiar el tiempo lo igualamos a 0 y pedimos el tiempo
 	cout<<"\n\tEste Programa tide la tempreatura cada 4 horas por el tiempo indicado"<<endl;
 	//para ingresar el tiempo que quieras medir
 	//cout<<"\nPor cuantas horas quiere medir ";
	//cin>>TT;
	cout<<"\n\n";
	for (T1=4;T1<=TT;T1+=4){
		cout<<"Ingrese la Temperatura "<<endl;
		cin>>TP;
		d++;
		TP2+=TP;

		if(TP>=may || may==0){
			may=TP;
			
		}
		if(TP<=min || min==0 ){
			min=TP;
		}
		
		
	}

	result=TP2/d;
	
	cout<<"\nLa temperatura promedio es "<<result<<endl;
	cout<<"La mayor Temperatura fue de "<<may<<endl;
	cout<<"La menor Temperatura fue de "<<min<<endl;
	

	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}