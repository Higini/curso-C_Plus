#include <iostream>
using namespace std;

int main(){
    int arreglo1[]={1,2,3};
    int arreglo2[]={4,5,6};
    int arreglo3[10];
    int i=1;

    for(int i=0;i<3;i++){
        arreglo3[i] = arreglo1[i] * arreglo2[i];

    }
    cout<<"El arreglo resultante es: ";
    for(int i=0;i<3;i++){
        cout<<arreglo3[i]<<" ";
    }

    return 0;
}
