#include<iostream>
#include<ctype.h>

using namespace std;

int main (){
	
	char a;
	
	cout<<"Ingrese una Letra: "; cin>>a;
	
	if (islower(a)){
		
		cout<<"La letra digitada es Minuscula" <<endl;
	}else{
		
		cout<<"La letra digitada es Mayuscula" <<endl;
	}
	
	
	
	return 0;
}