#include<iostream>
#include<stdlib.h>//libreria para el system("pause")
#include<conio.h>//libreria para el getch()
using namespace std;

int main(){
	int Nu;
	
	do{
		cout<<"Digite un Numero [1-10] " ;
		cin>>Nu;		
	}while((Nu<1) || (Nu>10));
	
	for(int i=1;i<=10; i++){
		
		cout<<Nu <<" * " <<i <<" = "<<Nu*i <<endl;	
	}
	
	system("pause");//para que el ejecutable no salga automaticamente(con mensaje)
	getch();//para que el ejecutable no salga automaticamente(sin mensaje)
	return 0;
}