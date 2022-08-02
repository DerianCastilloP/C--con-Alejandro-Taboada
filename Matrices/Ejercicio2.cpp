#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int Matrix[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
	cout<<"\nMatrix Principal"<<endl;
	cout<<"\n";
	
	for (int i=0; i<3;i++){
		for(int j=0; j<3; j++){
			cout<<"\t"<<Matrix[i][j];
		}
		cout<<"\n\n";
}
	
	
	cout<<"\nDiagonal Principal de la Matrix "<<endl;
	cout<<"\n";
	for (int i=0; i<3;i++){
		for(int j=0; j<3; j++){
			if(j==i){
			    if(i==0 && j==0){
			    	cout<<"\t"<<Matrix[i][j];
				    cout<<"\n\n";
				}
				if(i==1 && j==1){
			    	cout<<"\t\t"<<Matrix[i][j];
				    cout<<"\n\n";
				}
				if(i==2 && j==2){
			    	cout<<"\t\t\t"<<Matrix[i][j];
				    cout<<"\n\n";
				}
				
			}	
		}
	
	}
	
	
	
	
	getch();
	return 0;
}