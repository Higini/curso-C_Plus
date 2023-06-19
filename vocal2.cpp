#include <iostream>
using namespace std;
int main(){
    /**Programa que identifica si una letra es vocal.**/

    char letra;
    cout<<"Introduce la letra ";
    cin>>letra;
    switch(letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<<"Es una vocal"<<endl;
        break;
    default:cout<<"No es una vocal."<<endl;

    }

    return 0;
}
