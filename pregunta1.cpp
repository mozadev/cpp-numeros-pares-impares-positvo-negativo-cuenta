#include<iostream>
using namespace std;
int main(){

int numero,CantnumPar=0,CantnumImpar=0,CantnumPositivo=0,CantnumNegativo=0;

for (int i=0;i<6;i++){
	cout<<"ingrese el numero"<<endl;
	cin>>numero;
	if(numero%2==0){
		CantnumPar=CantnumPar+1;
	}
	if(numero%2!=0){
		CantnumImpar=CantnumImpar+1;
	}
	if(numero>0){
		CantnumPositivo=CantnumPositivo+1;
	}
	if(numero<0){
		CantnumNegativo=CantnumNegativo+1;
	}
}

cout<<"la cantidad de numeros pares es: " << CantnumPar<<endl;
cout<<"la cantidad de numeros impares es: " << CantnumImpar<<endl;
cout<<"la cantidad de numeros positivos es: " << CantnumPositivo<<endl;
cout<<"la cantidad de numeros negativos es: " << CantnumNegativo<<endl;

return 0;
}


