#include<iostream>

using namespace std;

int main(){
	char L;
	cout<<"Ingrese una Letra: " ; cin>>L;
	
	switch(L){
		
		case 'a': cout<<"\nEs una vocal minuscula" <<endl;break;
		case 'e': cout<<"\nEs una vocal minuscula" <<endl;break;
		case 'i': cout<<"\nEs una vocal minuscula" <<endl;break;
		case 'o': cout<<"\nEs una vocal minuscula" <<endl;break;
		case 'u': cout<<"\nEs una vocal minuscula" <<endl;break;
		default: cout<<"\nNo es una vocal minuscula" <<endl; break;	
	}
		
	return 0;
}