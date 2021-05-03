#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	static int num[1000000];
	long long int suma=0 ;
	for(int i=0;i<=1000000;i++){
		num[i]=i;
	}
	for (int j=0;j<=1000000;j++){
		suma+=num[j];
	}
	cout<<"valor de la suma : "<<suma;
	return 0;
}

