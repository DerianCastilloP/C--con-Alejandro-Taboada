#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int Num[] = {2,3,4,5};
	int Mult=1;
	
	for(int i=0; i<4; i++){
		
		Mult*=Num[i];
	}
	
	cout<<"El resultado es "<<Mult <<endl;
	system("pause");
	return 0;
}