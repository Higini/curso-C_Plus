#include<iostream>
using namespace std;

int main(){
/** Calcular la cantidad de d�gitos que tiene un n�mero **/

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
