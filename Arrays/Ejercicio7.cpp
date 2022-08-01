#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	char V1[50]={'D','E','R','I','A','N'}, V2[50]={'C','A','S','T','I','L','L','O'},V3[50];
	int n=6,n2=8;
	
	for (int i=0; i<n; i++){
		
		V3[i]=V1[i];
	}
	
	for (int i=n, j=0; j<n2; i++, j++){
		
		V3[i]=V2[j];
	}
	
	cout<<"Los valores de V3 son ";
	
	for (int i=0; i<(n+n2); i++){
		
		 cout<<V3[i];
	}
    cout<<"\n";
	
	system("pause");
	return 0;
}