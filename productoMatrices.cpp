#include <iostream>
#define MAX 10
using namespace std;

/**Multiplicación de dos matrices**/

int main(){

int A[MAX][MAX];
int B[MAX][MAX];
int C[MAX][MAX];
int m,n,l,p;

/**Comprobar si es posible la multiplicación de matrices*/
    cout<<"Introduce el numero de filas de la matriz A: ";
    cin>>m;
    cout<<"Introduce el numero de columnas de la matriz A: ";
    cin>>n;
    cout<<"Introduce el numero filas de la matriz B: ";
    cin>>l;
    cout<<"Introduce el numero de columnas de la matriz B: ";
    cin>>p;

    while (n!=l){
        cout<<"El numero de columnas de la matriz A debe ser igual al número de filas de la matriz B"<<endl;
            cout<<"Introduce el número de filas de la matriz A: ";
    cin>>m;
    cout<<"Introduce el numero de columnas de la matriz A: ";
    cin>>n;
    cout<<"Introduce el numero filas de la matriz B: ";
    cin>>l;
    cout<<"Introduce el numero de columnas de la matriz B: ";
    cin>>p;
    }

    /**Introducir los elementos de la matriz A**/

    cout<<"Introduce los elementos de la matriz A"<<endl;

    for(int i=0;i<m;i++){
        for(int e=0;e<n;e++){
                cout<<"Introduce elemento ["<<i<<"] ["<<e<<"]: ";
                cin>>A[i][e];
                cout<<endl;
        }
    }
    /**Introducir los elementos de la matriz A**/

    cout<<"Introduce los elementos de la matriz B"<<endl;

    for(int i=0;i<m;i++){
        for(int e=0;e<n;e++){
                cout<<"Introduce elemento ["<<i<<"] ["<<e<<"]: ";
                cin>>B[i][e];
                cout<<endl;
        }
    }
    /**Multiplicació de las dos matrices A*B **/

    for(int i=0;i<m;i++){
            for(int j=0;j<p;j++){
                C[i][j]= 0;
                for(int k=0;k<n;k++){

                    C[i][j] = C[i][j]+(A[i][k]*B[k][j]);
                }
                cout<<C[i][j]<<" ";

            }
            cout<<endl;
    }


return 0;
}
