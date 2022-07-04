#include <iostream>

using namespace std;

int main(){
	char L;
	cout<<"Ingrese una letra: "<<endl;
	cin>>L;
	
	switch(L){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una Vocal minuscula" <<endl; break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"Es una Vocal Mayuscula" <<endl; break;
		default:cout<<"NO ES UNA VOCAL";
	}
	
	
	
	
	return 0;
}