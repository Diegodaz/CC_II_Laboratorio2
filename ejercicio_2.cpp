#include <iostream>
using namespace std;

int invertir(int ArrayA[1000000],int ArrayB[1000000]){
	for(int i=1000000; i>=0; i--){
		ArrayB[i]=ArrayA[1000000-i];	
	}
	}

int main(){	
	static int ArrayB[1000000];
	static int ArrayA[1000000];
	for(int i=1; i<=1000000; i++){
		ArrayA[i]=i;
	}
	invertir( ArrayA, ArrayB);
	
	cout<<"La cadena invertida empieza en : ArrayB[1] ->"<<ArrayB[0]<<endl;
	cout<<"La cadena invertida termina  en : ArrayB[10000000] ->"<<ArrayB[999999]<<endl;
	return 0;
}
