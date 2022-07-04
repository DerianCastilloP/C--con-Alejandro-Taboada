#include<iostream>
#include <windows.h>//para limpiar pantalla
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
	/*M =Monto en la cuenta
	  D =deposito
	  R =retiro
	  T =titular 
	  C =contrase;a
	  OP =opcion a elegir
	*/

	int M =1000,D,R,C,OP;
	char T;
	cout<<"NAME'S FIRTS LYRICS: " <<endl; cin>>T;
	cout<<"PASSWORD: " <<endl; cin>>C;
	//cls;
	
	if(T=='d' && C==1234){
	cout<<"..................ATM........................" <<endl;
	cout<<".                                           ." <<endl;
	cout<<"        TIENE UN SALDO DE $"<<M  <<"          " <<endl;
	cout<<".                                           ." <<endl;
	cout<<".  1.DEPOSITAR                              ." <<endl;
	cout<<".                                           ." <<endl;
	cout<<".  2.RETIRAR                                ." <<endl;
	cout<<".                                           ." <<endl;
	cout<<".  3.CANCELAR OPERACION                     ." <<endl;
	cout<<"..................ATM........................" <<endl;
	
	cout<<" RESPONDER ";cin>>OP;
		clear_screen();//para borar pantalla
	
	switch(OP){
		case 1:
			cout<<"\nIngrese el Monto a depositar: " <<endl; cin>>D;
			M+=D;
		 break;
		case 2:
			cout<<"\nIngrese el Monto a Retirar: " <<endl; cin>>R;
			if(R>M){
				cout<<"NO TIENES SALDO SUFICIENTE " <<endl;
				OP=0;
			}else{
			M-=R;
				}
		 break;
		 case 3:
			cout<<"\nCERRANDO PROGRAMA.... " <<endl;
		 break;
		 default:cout<<"\nDato Invalido";
    }
	
	if (OP==1){
		clear_screen();//para borar pantalla
		
		cout<<"\n Usted a Depositado $" <<D <<endl;
	cout<<"..................ATM........................" <<endl;
	cout<<".                                           ." <<endl;
	cout<<"        TIENE UN SALDO DE "<<M  <<"          " <<endl;
	cout<<".                                           ." <<endl;
	cout<<"..................ATM........................" <<endl;	
		
	}else if(OP==2){
		clear_screen();//para borar pantalla
		
		cout<<"\n Usted a RETIRADO $" <<R <<endl;
	cout<<"..................ATM........................" <<endl;
	cout<<".                                           ." <<endl;
	cout<<"        TIENE UN SALDO DE "<<M  <<"          " <<endl;
	cout<<".                                           ." <<endl;
	cout<<"..................ATM........................" <<endl;	
			
	}else{

	 cout<<"\nPROGRAMA FINALIZADO ";
	}

 
 
 }else{
 	cout<<"\nDATOS INCORRECTOS" <<endl;
 }
	
	return 0;
}