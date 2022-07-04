#include <iostream>

using namespace std;

int main(){
	
	int F;
	cout <<"Ingresa un numero del 1-12 " <<endl; 
	cin>>F;
	
	if (F>0 && F<=12){
		
		switch(F){
			case 1:
			    cout<<"\nEnero "<<endl;
			break;
			case 2:
			    cout<<"\nFebrero "<<endl;
			break;
			case 3:
			    cout<<"\nMarzo "<<endl;
			break;
			case 4:
			    cout<<"\nAbril "<<endl;
			break;
			case 5:
			    cout<<"\nMayo "<<endl;
			break;
			case 6:
			    cout<<"\nJunio "<<endl;
			break;
			case 7:
			    cout<<"\nJulio "<<endl;
			break;
			case 8:
			    cout<<"\nAgosto "<<endl;
			break;
			case 9:
			    cout<<"\nSeptiembre "<<endl;
			break;
			case 10:
			    cout<<"\nOctubre "<<endl;
			break;
			case 11:
			    cout<<"\nNoviembre "<<endl;
			break;
			case 12:
			    cout<<"\nDiciembre "<<endl;
			break;

		}
		
	}else{
		cout<<"\nAVISO EL VALOR INGRESADO NO ESTA EN EL RANGO 1-12";
	}
	
	
	
	return 0;
}