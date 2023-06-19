#include <iostream>
using namespace std;
int main (){
    /** Construya un programa que ingrese un número del 1 al 12
    y muestre el nombre del mes correspondiente. **/

    int numero;

    cout<<"Introduzca el numero del mes del 1 al 12: ";
    cin>>numero;

    switch(numero){
    case 1: cout<<"El mes es enero"<<endl;
            break;
    case 2: cout<<"El mes es febrero"<<endl;
            break;
    case 3: cout<<"El mes es marzo"<<endl;
            break;
    case 4: cout<<"El mes es abril"<<endl;
            break;
    case 5: cout<<"El mes es mayo"<<endl;
            break;
    case 6: cout<<"El mes es junio"<<endl;
            break;
    case 7: cout<<"El mes es julio"<<endl;
            break;
    case 8: cout<<"El mes es agosto"<<endl;
            break;
    case 9: cout<<"El mes es septiembre"<<endl;
            break;
    case 10: cout<<"El mes es octubre"<<endl;
            break;
    case 11: cout<<"El mes es noviembre"<<endl;
            break;
    case 12: cout<<"El mes es diciembre"<<endl;
            break;
    default: cout<<"El numero del mes es incorrecto"<<endl;
    }

    return 0;
}
