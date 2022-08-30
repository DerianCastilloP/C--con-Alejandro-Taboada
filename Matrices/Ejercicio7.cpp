#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int F,C,X=0,V=0;
	int M1[100][100];//,M2[100][100];
	//El usuario ingrasa los datos
	cout <<"\nIngrese el numero de Columnas ";
	cin>>C;
	cout<<"\nIngrese el numero de Filas ";
	cin>>F;
	cout<<"\nIngrese los datos de la Matrix " <<endl;
	for(int i=0; i<C; i++){
		for(int j=0; j<F; j++){
			cout<<"Columna #"<<i <<" " <<"Fila #" <<j <<" : ";
			cin>>M1[i][j];
		}
	}
   //Matris transpuesta
/*	for(int i=0; i<C; i++){
		for(int j=0; j<F; j++){
			M2[j][i]=M1[i][j];
		}
	}*/
	//comparacion
	for(int i=0; i<C; i++){
		for(int j=0; j<F; j++){
			
			if(M1[i][j]==M1[j][i]){
				X++;
			}
			if(M1[i][j]==0){
				V++;
			}
		}
	}
	if(C==F && C!=1 && X==(C*F) && V!=(C*F)){
		cout<<"\nLa Matrix "<<endl;
		for(int i=0; i<C; i++){
			for(int j=0; j<F; j++){
				cout<<M1[i][j] <<"  ";
			}
			cout<<"\n";
		}
		cout<<"\n\tESTA ES UNA MATRIX SIMETRICA "<<endl;
	}else if(V==(C*F)){
		
		cout<<"\n\tLA MATRIX ESTA VACIA";
		
	}else{
		cout<<"\nLa Matrix "<<endl;
		for(int i=0; i<C; i++){
			for(int j=0; j<F; j++){
				cout<<M1[i][j] <<"  ";
			}
			cout<<"\n";
		}
		cout<<"\n\tNO ES SIMETRICA "<<endl;	
	}
	
	getch();
	return 0;
}