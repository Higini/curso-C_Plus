#include<iostream>
using namespace std;

int main(){
/** Calcular la cantidad de dígitos que tiene un número **/

    int contador,numero;
    cout<<"Introduce el numero ";
    cin>>numero;

       do {
            numero = numero /10;
            contador++;
        }while(numero!=0);

        cout<<"El numero de digitos es "<<contador<<endl;


return 0;
}
