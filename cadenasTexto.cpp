#include <iostream>
using namespace std;

int main(){
    /** CADENAS DE TEXTO **/
    char cadena1[] = "Gianmarco Tantaruna";
    // \0 es un caracter de fin de línea
    char cadena2[] = {'G','i','a','n','m','a','r','c','o','\0'};
    char cadena3[30];

    cout<<"Ingrese una cadena:";
    /* cin>>cadena3;    cin lee la cadena hasta llegar a un espacio.
    cin.getline lee la linea hasta llegar al caracter de salto de linea (enter)*/

    cin.getline(cadena3,30);
    cout<<"La cadena es "<<cadena3<<endl;

    return 0;
}
