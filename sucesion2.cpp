#include<iostream>
using namespace std;

int main(){
/** Mostrar el resultado de la siguiente sucesión:
1/2 + 1/3 + 1/4 +....1/N. **/
    int N;
    float suma=0;

    cout<<"Introduce N:  ";
    cin>>N;

    for(int i=2;i<=N;i++){
        suma =  suma + 1.0/i;
    }
    cout<<"El resultado es "<<suma<<endl;

return 0;
}
