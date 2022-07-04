#include<iostream>

using namespace std;

int main(){
	int E;
	cout<<"Ingrese su edad: " <<endl;
	cin>>E;
	
	if(E>=18 && E<=25){
		cout<<"\nUsted es un Adulto Joven[18-25]"<<endl;
	}else if(E<18){
		cout<<"\nUsted es un Nino[0-17]" <<endl;
	}else{
		cout<<"\nUsted es un Adulto Mayor[26-dead]"<<endl;
	}
	
	
	return 0;
}