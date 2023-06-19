#include <iostream>
#include <cmath>
using namespace std;

int main(){
/** Escribir un programa que permita hallar el volumen
de una esfera **/

    float volumen, radio;
    const float PI = 3.14159;

    cout<<"Introduce el radio de la esfera ";
    cin>>radio;
/* si hacemos 4/3 el programa arroja como resultado 1 porque
al no poner ningún decimal los considera enteros (int).
La solución es poner decimales como 4.0 o 3.0 o ambos. */

    volumen = 4.0/3*PI*pow(radio,3);

    cout<<"El volumen de la esfera es "<<volumen<<endl;


return 0;
}
