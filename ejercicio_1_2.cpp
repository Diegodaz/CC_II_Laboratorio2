#include <iostream>
#include <conio.h>
using namespace std;

int sumar(int Arreglo[1000000],long long int suma){
	if(suma==0){
		suma+=1;
		sumar(Arreglo, suma);
	}
	else{
		for(int i=0; i<=1000000; i++){
	   		suma+=Arreglo[i];
	   	}
	   cout<<"La suma es: "<<suma-1;
	}
}
int main(){
	long long int suma=0;
	static int Arreglo[1000000];
	for(int i=0; i<=1000000; i++){
		Arreglo[i]=i;
	}
	sumar( Arreglo, suma);
	
	return 0;
}
