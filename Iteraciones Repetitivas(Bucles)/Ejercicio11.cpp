#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	int N, potencia=0,result=0;
	
	cout<<"\tPrograma que calcule [2^1+2^2+2^3...+2^n]"<<endl;
	cout<<"\nINGRESA UN VALOR "<<endl;
	cin>>N;
	cout<<"\n";
	for(int i=1; i<=N; i++){
		
		potencia=(pow(2,i));
		cout<<"potencia de 2^"<<i <<" es = "<<potencia <<endl;
		result+=potencia;
		
	}
	
	cout<<"\nEL resultado es " <<result <<endl;
	
	
	getch();
	return 0;
}