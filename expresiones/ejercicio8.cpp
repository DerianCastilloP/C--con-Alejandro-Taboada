#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	
	int cat1,cat2;
	float hipo=0;
	
	cout <<"Escriba el cateto 1 " <<endl; cin>>cat1;
	cout <<"\nEscriba el Cateto 2 " <<endl; cin>>cat2;
	
	hipo=(cat1^2)+(cat2^2);
	
	
	cout<<"\nLa Hipotenusa es " <<hipo <<endl;
	
	system("Pause");
	
return 0;	
}