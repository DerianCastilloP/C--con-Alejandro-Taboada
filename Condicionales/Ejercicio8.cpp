#include <iostream>

using namespace std;

int main(){
	int N1,N2,N3,N4;
	cout<<"Ingresa el Primer Numero "<<endl;
	cin>>N1;
	cout<<"Ingresa el Segundo Numero "<<endl;
	cin>>N2;
	cout<<"Ingresa el Tercer Numero "<<endl;
	cin>>N3;
	cout<<"\n........................................" <<endl;
	cout<<"Ingrese Otro Numero" <<endl;
	cin>>N4;
	
	if(N4==N1 || N4==N2 || N4==N3){
		
		cout <<"El Ultimo numero Ingresado es Igual a alguno de los anteriores" <<endl;
		
	}else{
		cout <<"El Ultimo numero NO ES IGUAL A LOS ANTERIORES " <<endl;
	}
	
	return 0;
}