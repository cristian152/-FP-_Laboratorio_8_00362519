#include<iostream>

using namespace std;

int main(){
	int matriz[5][9];
	int carnet[8]; 
	int invertir[8], cont=0;
	
	cout<<"Ingrese su numero de carnet: "<<endl;	
	for(int i=0;i<8;i++){
		cin>>carnet[i];
	}
	
	cout<<"ingrese su numero de carnet invertido"<<endl;
	for(int i=0;i<8;i++){
		cin>>invertir[i];
	}	
	    
	for(int i=0; i<5; i++){
		for(int j=0; j<9; j++){
			if(i%2==0){
				matriz[i][j]=carnet[j];
			}
			
			else{
				matriz[i][j]=invertir[j];
			}
		    
			}
		}
	
	
	for(int i=0; i<5; i++){
		for(int j=0; j<7; j++){
			matriz[4][j]=cont;
			cont++;
		}
		matriz[i][8]=cont;
		cont++;
	}
	   
	cout<<"matriz"<<endl;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<9;j++){
			
				cout<<matriz[i][j]<<" |";
						
		}
		cout<<endl;
	}
	return 0;
}
