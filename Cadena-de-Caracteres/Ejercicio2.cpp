#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char Ar1[5];
	char Ar2[5];
	
	cout<<"digita 5 caracteres ";
	cin.getline(Ar1, 6, '\n');
	
	strcpy(Ar2, Ar1);
	
	std :: cout<<"\n" <<Ar2 <<endl;
	
	getch();
	return 0;
}