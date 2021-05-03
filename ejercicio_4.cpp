#include <iostream>
#include <string.h>

using namespace std;

#define num 1000000

long long cantidadI(char cadena[], long long int cont){
    for(int i=0; cadena[i]!='\0'; ++i){
        cont++;
    }
    return cont;
}

long long cantidadR(char cadena[], long long int cont){
    if(cadena[cont]=='\0')
        return cont;
    return cantidadR(++cadena,++cont);
}

int main(){
    static char cadena[num];
    long long int cont = 0;
    cout<<"Digite su cadena: \n";
    cin.getline(cadena,num,'\n');
    cout<<"\nIterativa\n";
    cout<<"Numero de elementos: "<<cantidadI(cadena, cont)<<endl;
    cont = 0;
    cout<<"\nRecursiva\n";
    cout<<"Numero de elementos: "<<cantidadR(cadena, cont)<<endl;
       return 0; 
}
