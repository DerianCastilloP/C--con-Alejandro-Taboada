#include <iostream>

using namespace std;
int main(){
	
	int N1, unidad, decena, centena, millar;
	
	cout <<"Ingrese un Numero: " <<endl;
	cin>>N1;
	
	//2343
	unidad= N1%10;
    N1/=10;
    //cout<<unidad <<" " <<N1 <<endl;
    //234
    decena= N1%10;
    N1/=10;
   // cout<<decena <<" " <<N1 <<endl;
    //23
    centena= N1%10;
    N1/=10;
    //cout<<centena <<" " <<N1 <<endl;
	//2
	millar= N1%10;
	N1/10;
	//cout<<millar <<" " <<N1 <<endl;
	//0
		if(millar<4){
	
		    switch(millar){
			 	case 1: cout<<"M";break;
			 	case 2: cout<<"MM";break;
			 	case 3: cout<<"MMM";break;
			}
		        	switch(centena){
			 	case 1: cout<<"C";break;
			 	case 2: cout<<"CC";break;
			 	case 3: cout<<"CCC";break;
			 	case 4: cout<<"CD";break;
			 	case 5: cout<<"D";break;
			 	case 6: cout<<"DC";break;
			 	case 7: cout<<"DCC";break;
			 	case 8: cout<<"DCCC";break;
			 	case 9: cout<<"CM";break;	
			 }
		
			switch(decena){
			 	case 1: cout<<"X";break;
			 	case 2: cout<<"XX";break;
			 	case 3: cout<<"XXX";break;
			 	case 4: cout<<"XL";break;
			 	case 5: cout<<"L";break;
			 	case 6: cout<<"LX";break;
			 	case 7: cout<<"LXX";break;
			 	case 8: cout<<"LXXX";break;
			 	case 9: cout<<"XC";break;	
			 }
			switch(unidad){
			 	case 1: cout<<"I";break;
			 	case 2: cout<<"II";break;
			 	case 3: cout<<"III";break;
			 	case 4: cout<<"IV";break;
			 	case 5: cout<<"V";break;
			 	case 6: cout<<"VI";break;
			 	case 7: cout<<"VII";break;
			 	case 8: cout<<"VIII";break;
			 	case 9: cout<<"IX";break;	
			 }

		}else{
			
			cout<<"\nValor muy Grande para Evaluar "<<endl;
		}
	return 0;
}