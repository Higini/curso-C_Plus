#include <iostream>
using namespace std;

int main(){
    /**Lea su nombre en min�scula y muestre por
    consola su nombre escrito en may�scula. Use la funci�n toupper.
    **/
    char nombre[30],c;
    int i=0;
    cout<<"Ingresa tu nombre:";
    cin.getline(nombre,30);

    /* El while sirve para que mientras haya un carcater entre dentro del
    while y as� se aplica la funci�n toupper que cambia el caracter a may�scula.
    Esto ocurrir� hasta que llegue al salto de l�nea '\0'. Tambi�n
    se podr�a poner while(nombre[i]!='\0') */

    while(nombre[i]){
        c = toupper(nombre[i]);
        i++;
        cout<<c;
    }

    return 0;
}
