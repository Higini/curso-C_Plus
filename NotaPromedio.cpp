#include <iostream>
using namespace std;

int main (){
/** Escribir un programa que lea 3 notas y muestre
 el promedio final **/

    float nota1, nota2, nota3, promedioFinal;

    cout<<"Introduzca la primera nota ";
    cin>>nota1;

    cout<<"Introduzca la segunda nota ";
    cin>>nota2;

    cout<<"Intruduzca la tercera nota ";
    cin>>nota3;

    /* El paréntesis es necesario. En este caso no ha falta escribitt
    3.0 porque el numerador es de tipo float */

    promedioFinal = (nota1+nota2+nota3)/3;

    cout<< nota1+nota2+nota3<<endl;

    cout<<"El promedio final es de "<<promedioFinal<<endl;

return 0;
}
