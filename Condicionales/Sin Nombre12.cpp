#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	/*
	OP= opcion (entero)
	
	*/
	
	int OP,N2;
	float N1,resultado=0;
	
	cout<<"\tOperaciones Math" <<endl;
	cout<<endl;
	cout<<" 1.Cubo de un numero" <<endl;
	cout<<" 2.Numero par o impar" <<endl;
	cout<<" 3.Salir" <<endl;
	cout<<endl;	

	cout<<"\nElige una opcion ";
	cin>>OP;
	
	
	switch(OP){
		case 1:
				cout<<"\n \tCubo de un Numero"<<endl;
				cout<<"\nIngrese un numero " ;
				cin>>N1;
				resultado= cbrt(N1);
				cout<<"\n La raiz cubica de " <<N1 <<" es " <<resultado <<endl;
			break;
		case 2:
				cout<<"\n \tNumero Par o Impar "<<endl;
				cout<<"\n Ingrese un numero " ;
				cin>>N2;
				if(N2%2==0){
					cout<<"\nEl numero "<<N2<<" es Par ";
				}else{
					cout<<"\nEl numero "<<N2<<" es Impar ";
				}
		    break;
		case 3:
		    	cout<<"HA SALIDO DEL PROGRAMA";
			break;
		
		default: cout<<"DATOS INCORRECTOS";
	}

	return 0;
}