#include <iostream>
using namespace std;

int main(){
/** Términos sucesión Fibonacci

0 1 1 2 3 5 8 13 21 34 55 ....   **/

    int termino, valor, valorP1=1, valorP2=0;

    cout<<"Introduce el termino ";
    cin>>termino;

    if (termino == 0){
    cout<<"El termino es "<< 0<<endl;
    }
    if (termino == 1){
    cout<<"El termino es "<< 1<<endl;
    }
    if(termino>1){
        for(int i=2;termino>=i;i++){

            valor = valorP1 + valorP2;
            valorP2 = valorP1;
            valorP1 = valor;
        }
    }

    cout<<"El valor del termino es: "<<valor<<endl;

    return 0;
}
