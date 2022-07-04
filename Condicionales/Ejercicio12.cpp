#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;

//limpiar pantalla buscado en internet funciona solo para windows
void clear_screen(char fill = ' ') { 
    COORD tl = {0,0};
    CONSOLE_SCREEN_BUFFER_INFO s;
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);   
    GetConsoleScreenBufferInfo(console, &s);
    DWORD written, cells = s.dwSize.X * s.dwSize.Y;
    FillConsoleOutputCharacter(console, fill, cells, tl, &written);
    FillConsoleOutputAttribute(console, s.wAttributes, cells, tl, &written);
    SetConsoleCursorPosition(console, tl);
}
//limpiar pantalla buscado en internet funciona solo para windows


int main(){
	
	/*
	OP= opcion (entero)
	
	*/
	
	int OP,N2,PO;
	float N1,resultado=0;
	
	
		
do{
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
		    	cout<<"SALIENDO DEL PROGRAMA";
			break;
		
		default: cout<<"DATOS INCORRECTOS";
	}
	if(OP!=3){
	
	cout<<endl;
	cout<<"\nDESEA COMTINUAR "<<endl;
	cout<<" 1.Si               2.No"<<endl;
	cin>>PO;
	clear_screen();
    }
	}while(OP==1 ||OP==2 && PO==1);

cout<<"\nHA SALIDO DEL PROGRAMA";

	return 0;
}