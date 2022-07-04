#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int N, result=0, e;
	cout<<"\t\tPARA (1+3+5...+2n-1)" <<endl;
	cout<<"\nIngrese un valor de n "<<endl;
	cin>>N;
	cout<<"\n";
	
	for(int i=1; i<=N; i++){
		
		e=((2*i)-1);
		result+=e;
		
		if(i==1){
			cout<<result;
		}else{
			cout<<"+"<<e;
		}
		
	}
	cout<<"\n\nEl resultado es " <<result <<endl;
	
	system("pause");
	return 0;
}