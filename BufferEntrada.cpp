#include <iostream>
using namespace std;

int main(){
    /** BUFFER DE ENTRADA **/
    char nombre[25];
    int edad;

    /*******BUFFER**********
    Cuando introducimos la edad y le damos a enter pasa
    al buffer de entrada 23'\n'. A continuación viene
    cin>>edad y busca un valor numérico dejando el
    caracter '\n' en el buffer. A continuación se escribe
    "Ingresa tu nombre" pero cin.getline no espera porque
    tiene un caracter en el buffer y es '\n\ que hace
    saltar la línea y no almacena en la variable nombre nada.
    **********************/
    cout<<"Ingresa tu edad:";
    cin>>edad;
    cin.ignore();/**ELIMINA EL PRIMER CARACTER QUE ENCUENTRA**/
    /* cin,ignore(256,'\n') elimina 256 caracteres
    o hasta que encuentre el caracter especificado.
     En este caso salto de línea '\n\' */

    cout<<"Ingresa tu nombre:";
    cin.getline(nombre,25);

    cout<<"Te llamas "<<nombre<<" y tu edad es "<<edad<<endl;

    return 0;
}
