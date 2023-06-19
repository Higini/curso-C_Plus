#include<iostream>
using namespace std;

int main(){
/** Mostrar el resultado de la siguiente sucesión:
1/2 + 1/3 + 1/4 +....1/N. **/
    int t,N;
    float suma=0;

    cout<<"Introduce el numero de terminos de la sucesion ";
    cin>>t;
    for(int N=2;N<=t+1;N++){
        suma =  suma + 1.0/N;
    }
    cout<<"El resultado es "<<suma<<endl;

return 0;
}
