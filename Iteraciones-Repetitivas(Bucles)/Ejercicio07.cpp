#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int N, result=0;
	cout<<"\t\tPARA (1+2+3...+n)" <<endl;
	cout<<"\nIngrese un valor de n "<<endl;
	cin>>N;
	cout<<"\n";
	
	for(int i=1; i<=N; i++){
		
		
		result+=i;
		
		if(i==1){
			cout<<result;
		}else{
			cout<<"+"<<i;
		}
		
	}
	cout<<"\n\nEl resultado es " <<result <<endl;
	
	system("pause");
	return 0;
}