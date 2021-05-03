#include <iostream>
using namespace std;


#include <iostream>
using namespace std;

int  invertir(int ArrayA[1000000],int ArrayB[1000000]){
	for(int i=1000000; i>=0; i--){
		ArrayB[i]=ArrayA[1000000-i];	
	}
	}

int main(){	
	static int ArrayB[1000000];
	static int ArrayA[1000000];
	long long int aux;
	for(int i=1; i<=1000000; i++){
		ArrayA[i]=i;
	}
	invertir( ArrayA, ArrayB);
	
	
	for(int x;x<1000000;x++)
		for(int y;x<1000000;y++)
			if (ArrayB[y]>ArrayB[y+1]){
				aux=ArrayB[y];
				ArrayB[y]=ArrayB[y+1];
				ArrayB[y+1]=aux;	
			}

	cout<<ArrayB[0]<<"  ";
	cout<<ArrayB[999999];
	return 0;
}
