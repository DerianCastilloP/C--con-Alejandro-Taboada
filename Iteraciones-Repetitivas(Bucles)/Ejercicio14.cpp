/*Ejercicio 14
En una clase de 5 alumnos se han realizado tres exámenes y 
			se require determinar el numero de:
	
	a) Alumnos que aprobaron todos los exámenes.
	   jose[90,80,70] jose aprobado
	b) Alumnos que aprobaron al menos un examen.
	c) Alumnos que aprobaron únicamente el último examen.
	
Realice un programa que permita la lectura de los datos y el
			cálculo de las estadisticas.
*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int NA=1,A=0,AT=0,B=0,BT=0,C=0,CT=0; //NA=Numero de Alumno, A=Alumno Aprobado, B=Alumno c/u aprobada,C=la ultima aprobada.
	//AT,BT,CT Son variables de mas ya que lo pude hacer agregando ++ a las variables dentro del if
	float N1,N2,N3,Nm=70.0,ET=0;//N#=Notas de Alumno, *Nm=Nota minima

	
	do{	//El Profe Alejandro lo hizo con un *For yo lo hice con un Do While pero como me dan el mismo resultado lo deje asi.
		
	cout<<"Ingrese las 3 notas del Alumno " <<NA <<endl;

		cin>>N1 >>N2 >>N3;
		
	    if(N1>=Nm && N2>=Nm && N3>=Nm){
				A=1;
				AT+=A;//lo pude hacer con un A++;		
		}else if(N1>=Nm || N2>=Nm || N3>=Nm){
				B=1;
				BT+=B;//Lo pude hacer con un B++
		} if(N1<Nm && N2<Nm && N3>=Nm){
				C=1;
				CT+=C;//Lo pude hacer con un C++
		}
	
		ET+=((N1+N2+N3)/3);//pense que teniamos que sacar el promedio XD, A lo deje como lo hice.
	
	    NA++;
    }while(NA<=5);
    ET/=5;//tambien es del promedio.
    
    cout<<"\nA) El Numero de Alumnos que Aprobo todas las materias es "<<AT <<endl;
    cout<<"B) El Numero de Alumnos que Aprobo al menos una materias es "<<BT <<endl;
    cout<<"C) El Numero de Alumnos que Aprobo SOLO la Ultima materias es "<<CT <<endl;
    //mo necesario para tener el ejercicio bien (es para mostrar el Promedio)
    cout<<"\nEl promedio del Aula Completa es " <<ET <<endl;
    
	
	getch();
	return 0;
}