#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int Vect[100];
	int Suma=0,Nv,C=0;
	cout<<"\nIngrese Cuantos Valores quiere en el Vector ";
	cin>>Nv;
   //tomando los datos necesarios para completar el ejercicio
	for(int i=0; i<Nv; i++){
		cout<<"\nIngrese el Numero "<<i+1 <<endl;
		cin>>Vect[i];	
		Suma+=Vect[i];
	}
	//Para ver cual es el numero exixtente que sume igual que los demas del vector
	for(int i=0; i<Nv; i++){
		if(Vect[i]==(Suma-Vect[i])){
			cout<<"\nEste Vector "<<i <<" que es el Numero "<<Vect[i]<<" es Igual a la Suma de los demas Numeros del Vector"<<endl;
			C=1;//dato necesario para comprobar si hay o no algun valor que cumpla lo anterior
		}
	}
	//para demostrar que no hay algun valor que cumpla la existencia de un Numero del Vector que Si Sumando los demas Numeros del Vector se Igual a El
	if(C==0){
		cout<<"\nNo Existe Ningun Numero que Si Sumando los demas Numeros del Vector se Igual a El "<<endl;
	} 
	
	//NOTA EL MAESTRO LO HIZO CON UN SOLO FOR Y BUSCANDOLE EL MAYOR Y LA SUMA Y DESPUES COMPARANDOLO

	getch();
	return 0;
}