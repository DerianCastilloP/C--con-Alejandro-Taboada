#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int Edad;
	char S;
	float Altura;
	
	cout<<"Ingresa tu edad "<<endl;
	cin>>Edad;
	cout<<"\nIngresa tu Genero M=masculino, F=femenino "<<endl;
	cin>>S;
	cout<<"\nIngresa tu Altura en centimetros "<<endl;
	cin>>Altura;
	cout<<"\n\n\tDATOS RECOPILADOS"<<endl;
	cout<<"\nSu Edad es "<<Edad<<" años";
	cout<<"\nSu Genero es "<<S;
	cout<<"\nSu Altula es "<<Altura<<" cm";
	
	
	getch();
	return 0;
}