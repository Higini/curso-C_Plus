#include <iostream>
using namespace std;
int main (){
/** Número entero par o impar **/

int numero;

cout<<"Introduce el numero a evaluar ";
cin>>numero;

if (numero%2 == 0){
cout<<"El numero "<<numero<<" es par.";
}
else{
cout<<"El numero "<<numero<<" es impar."<<endl;
}

return 0;
}
