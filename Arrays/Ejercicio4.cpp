#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int Num[8] = {4,5,6,2,76,43,34,56};
	
	for(int i=7; i>=0; i--){
		cout<<"\nEl numero del Vector con indice ["<<i<<"] es "<<Num[i];
	}
	
	
	cout<<"\n";
	system("pause");
	return 0;
}

