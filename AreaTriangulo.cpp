#include <iostream>

using namespace std;

int main (){
    /** Programa que calcula el área **/
    float area, base, altura;
    area = base*altura/2;
    cout<< "Ingresa la base sel triangulo ";
    cin>>base;

    cout<<"Ingresa la altura ";
    cin>>altura;

    area = base*altura/2;

    cout<<"El area del triangulo es: "<<area<<endl;

    return 0;
}
