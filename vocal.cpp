#include <iostream>
using namespace std;
int main(){
    /**Programa que identifica si una letra es vocal.**/

    char letra;
    cout<<"Introduce la letra ";
    cin>>letra;
    switch(letra){
    case 'a':
        cout<<"Letra a"<<endl;
        break;
    case 'e':
        cout<<"Letra e"<<endl;
        break;
    case 'i':
        cout<<"Letra i"<<endl;
        break;
    case 'o':
        cout<<"Letra o"<<endl;
        break;
    case 'u':
        cout<<"Letra u"<<endl;
        break;
    case 'A':
        cout<<"Letra a"<<endl;
        break;
    case 'E':
        cout<<"Letra e"<<endl;
        break;
    case 'I':
        cout<<"Letra i"<<endl;
        break;
    case 'O':
        cout<<"Letra o"<<endl;
        break;
    case 'U':
        cout<<"Letra u"<<endl;
        break;
    default:cout<<"No es una vocal."<<endl;

    }

    return 0;
}
