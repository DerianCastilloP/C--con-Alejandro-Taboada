#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int x,y,result=1;
	cout<<"Escriba el numero que quiere elevar "<<endl;
	cin>>x;
	cout<<"\nEscriba a cuanto lo quiere elevar "<<endl;
	cin>>y;
	if((x>0) && (y>0)){
		
		for(int i=0;i<y;i++){
			
			//cout<<"\n"<<i;
			result*=x;
		}
		
	cout<<"\n"<<x <<"^"<<y <<" = "<<result;	
		
		
		
	}else{
		
		cout<<"\nDEBE INTRODUCIR VALORES ENTEROS POSITIVOS MAYORES A 0 " <<endl;
		cout<<"\nNOTA: todo numero elevado a 0 es igual a 0 \ny 0 elevado a cualquier potencia es igual a 0 " <<endl;
	}
	
	
	
	getch();
	return 0;
}