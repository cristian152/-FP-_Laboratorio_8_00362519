#include<iostream>

using namespace std;

int main(){
	int carnet[8];
	
	cout<<"Ingrese su numero de carnet: "<<endl;
	for(int i=0; i<8; i++){
	    
		cin>>carnet[i];		
	}	 
	for(int i=0; i<8; i++){
	    
		cout<<carnet[i];
	}
	cout<<endl;
	
	for(int i=7; i>=0; i--){
	    
		cout<<carnet[i];
	}

	return 0;
}
