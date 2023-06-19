#include <iostream>
using namespace std;

int main(){

    int arreglo[10], n;

    cout<<"Introduce el numero de elementos: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Introduce el indice del elemento "<<i<<": ";
        cin>>arreglo[i];
    }

    int menor = 0;

    for(int i=1;i<n;i++){
        if(arreglo[i]<arreglo[menor]){
            menor = i;
        }

}

  cout<<"El menor es "<<arreglo[menor]<<" que se encuentra en el indice "<<menor;

    return 0;
}
