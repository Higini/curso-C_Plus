#include <iostream>
using namespace std;

int main(){
    /**Lea su nombre en minúscula y muestre por
    consola su nombre escrito en mayúscula. Use la función toupper.
    **/
    char nombre[30],c;
    int i=0;
    cout<<"Ingresa tu nombre:";
    cin.getline(nombre,30);

    /* El while sirve para que mientras haya un carcater entre dentro del
    while y así se aplica la función toupper que cambia el caracter a mayúscula.
    Esto ocurrirá hasta que llegue al salto de línea '\0'. También
    se podría poner while(nombre[i]!='\0') */

    while(nombre[i]){
        c = toupper(nombre[i]);
        i++;
        cout<<c;
    }

    return 0;
}
