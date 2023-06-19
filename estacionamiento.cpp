#include <iostream>
using namespace std;
int main (){
/** En un estacionamiento cobran $/1.50 por hora o fracción
Diseñe el programa que determine cuánto debe pagar un cliente por el
estacionamiento de su vehículo, conociendo el tiempo de estacionamiento
en horas y minnutos **/

    int horas, minutos;
    float total;

    cout<<"Introduce el tiempo de estacionamiento "<<endl;
    cout<<"Horas: ";
    cin>>horas;
    cout<<"Minutos: ";
    cin>>minutos;

    if(minutos>0){
        horas++; /**horas = horas + 1 **/
    }

    total = horas* 1.5;

    cout<<"El total a pagar es "<<total<<" $"<<endl;

    return 0;
}
