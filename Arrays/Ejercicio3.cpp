#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int Num[100],n;
	
	cout<<"Ingrese los numeros que tendra el arreglo de su preferencia "<<endl;
	cin>>n;
	
	cout<<"\nIngrese "<<n<<" numeros de su preferencia "<<endl;
	for(int i=0;i<n;i++){
		cin>>Num[i];
	}
	cout<<"\n\nprocesando...\n\n";
	for(int i=0;i<n;i++){
		cout<<"\nEl numero del Vector con indice ["<<i<<"] es "<<Num[i];
	}
	
	
	
	getch();
	return 0;
}