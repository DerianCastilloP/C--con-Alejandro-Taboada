#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int N,S=0,F=1,F1=0;
	cout<<"Ingrese el numeros de valores que quiere Vicualizar " <<endl;
	cin>>N;
	cout<<"\n";
	for(int i=1;i<N;i++){
		
		F1=F+S;
		if(F1==1){
			cout<<"1,"<<F1;
		}else{
			cout<<","<<F1;
		}
		
		S=F;
		F=F1;
	}
	cout<<"\n"<<endl;
	system("pause");
	return 0;
}