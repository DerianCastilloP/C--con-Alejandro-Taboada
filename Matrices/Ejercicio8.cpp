#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int Fi=3, Co=3, X=0;
	int Matrix[Fi][Co]={{2,3,1},{7,4,1},{9,-2,1}}, Matrix2[Fi][Co]={{9,-2,-1},{5,7,3},{8,1,0}}, Matrix3[Fi][Co]={{0,0,0},{0,0,0},{0,0,0}};// MatrixA=[Fi][Co];

	cout <<"\n\tMatrix 1 " <<endl;
	cout<<"\n";
	
	for(int i=0; i<Fi; i++){
		
		for(int j=0; j<Co; j++){
			
			cout<<Matrix[i][j];
			cout<<"\t";
		}
		cout<<"\n\n";
	}
	
	cout <<"\n\tMatrix 2 " <<endl;
	cout<<"\n";
	
	for(int i=0; i<Fi; i++){
		
		for(int j=0; j<Co; j++){
			
			cout<<Matrix2[i][j];
			cout<<"\t";
		}
		cout<<"\n\n";
	}
	
	cout<<"PRODUCTO DE MATRICES";
	
		for(int i=0; i<Fi; i++){
		
	 		for(int j=0; j<Co; j++){
	 			
	 			for(int k=0; k<Fi; k++){
	 				
	 					Matrix3[i][j]+=Matrix[i][k]*Matrix2[k][j];
	 					
				}

				
			}

		}
	
	
	cout<<"\n\n";
	for(int i=0; i<Fi; i++){
		
		for(int j=0; j<Co; j++){
			
			cout<<Matrix3[i][j];
			cout<<"\t";
		}
		cout<<"\n\n";
	}
	
	
	
	
	system("pause");
	return 0;
}