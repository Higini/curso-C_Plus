#include <iostream>
using namespace std;

/** Matriz Bideminsional **/

int main(){
    int fila = 3, columna = 3;
    int A [fila][columna];
/**Introducir la matriz bidimensional**/
    for(int i=0; i<fila; i++){
        for(int j=0; j<columna; j++){
            cout<<"["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }
        cout<<endl;
    }
/**Imprimir por consola la matriz**/
for(int i=0; i<fila; i++){
        for(int j=0; j<columna; j++){
            cout<<A[i][j]<<" ";

        }
        cout<<endl;
    }



return 0;
}
