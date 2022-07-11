/*Realice un programa que solicite al usuario que piense un numero entero 
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo
Rango [1-100], e indicarle al usuario si el numero que digito es menor o mayor
al numero aleatorio, asi hasta que lo adivine. y por ultimo mostrale el numero
de intenttos que le llevo.
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	srand(time(NULL));//para cambiar el valor inicial o la semilla del numero aleatorio necesitas la libreria time.h
	
	int Naleatorio=0, N, It=0;
    
    Naleatorio=1+rand()%(101-1);//formula para los numeros aleatorios es necesario para la libreria stdlib.h
    //cout<<"\n"<<Naleatorio;
    cout<<"Piensa en un numero en el Rango[1-100] para Adivinar el Numero aleatorio "<<endl;
    do{
    	if(It==0){//Este if no es necesario para el correcto funcionamiento pero lo puse para que el usuario este mejor informado
    		cout<<"\nIngresa el Numero Pensado ";
		}else{
			cout<<"\nVUELVA a Ingresar Otro Numero ";
		}//fin del if innecesario
    	
    	cin>>N;
    	
    	if(N<Naleatorio){
    		
    		cout<<"\nEl numero que ingresaste es MENOR AL NUMERO BUSCADO " <<endl;
    		
		}else if(N>Naleatorio){
			
			cout<<"\nEl numero que ingresaste es MAYOR AL NUMERO BUSCADO " <<endl;
					
		}else{
			cout<<"\nHAS ADIVINIDO EL NUMERO AlEATORIO"<<endl;
		}	
    	
    It++;	
	}while(N!=Naleatorio);
	
	cout<<"El numero de intesto que te llevo fue "<<It <<endl;
	
	cout<<"\n";
	system("pause");
	return 0;
}
