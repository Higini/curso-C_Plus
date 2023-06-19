#include <iostream>
using namespace std;
int main (){
/** Escribir un programa que diga si un número entero es
positivo, negativo o neutro **/

    int numero;
    cout<<"Introduzca el numero a evaluar ";
    cin>>numero;

    if(numero>=0){

        if(numero>0){
            cout<<"El numero "<<numero<<" es positivo.";
        }
        else{
            cout<<"El numero "<<numero<<" es neutro.";
        }

    }

         else{
            cout<<"El numero "<<numero<<" es negativo.";
        }

    return 0;
}
