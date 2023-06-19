#include <iostream>
#define MAX 100
using namespace std;

int main(){
    /** Unión de 2 arreglos con una dimensión diferente **/

    int arreglo1[MAX], arreglo2[MAX], arreglo3[2*MAX];
    int n1, n2, n3;

    /** FORMAR ARREGLO 1 **/

    // Comprobación de que la dimensión del arreglo sea correcta
    do{
        cout<<"Introduce la dimension del ARREGLO 1: ";
        cin>>n1;
    }while(n1>MAX || n1<=0);

    // Introducir datos en el arreglo

    for(int i=0;i<n1;i++){
        cout<<"Introduce el elemento "<<i<<": ";
        cin>>arreglo1[i];
    }
    // Mostrar en la consola el arreglo

    cout<<"El arreglo 1 introducido es: ";
    for(int i=0; i<n1;i++){
        cout<<arreglo1[i]<<" ";

    }
    cout<<endl;

    /** FORMAR ARREGLO 2 **/

    do{
        cout<<"Introduce la dimension del ARREGLO 2: ";
        cin>>n2;
    }while(n2>MAX || n2<=0);

    for(int i=0;i<n2;i++){
        cout<<"Introduce el elemento "<<i<<": ";
        cin>>arreglo2[i];
    }

    cout<<"El arreglo 2 introducido es: ";
    for(int i=0; i<n2;i++){
        cout<<arreglo2[i]<<" ";

    }
    cout<<endl;

    /** FORMAR ARREGLO 3 **/

    //Se crea un contador e que recorre todo el arreglo3

    int e=0;
    n3 = n1 + n2; // para mostrar el arreglo 3 al utilizar FOR

    for(int i=0;i<n1;i++){

        arreglo3[e] = arreglo1[i];
        e++;
    }

    for(int i=0;i<n2;i++){
        arreglo3[e] = arreglo2[i];
        e++;
    }

    /** Mostrar el arreglo 3 por pantalla **/

    cout<<"El arreglo 3 es: ";

    for(int i=0;i<n3;i++){
        cout<<arreglo3[i]<<" ";
    }

return 0;
}
