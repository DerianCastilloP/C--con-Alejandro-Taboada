#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int N,result=1,result2=0;
	cout<<"\tSUMA DE FACTORIALES (1!+2!+3!+...+n!)"<<endl;
	cout<<"\nINTRODUCIR UN VALOR "<<endl;
	cin>>N;
	cout<<"\n";
	for(int i=1; i<=N;i++){
		
		result*=i;
		if(result==1){
		cout<<result;	
		}else{
			cout<<"+"<<result;
		}
		result2+=result;
	}
	cout<<"\n\n" <<result2<<endl;
	
	system("pause");
	return 0;
}