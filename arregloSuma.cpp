#include <iostream>
#define MAX 100
using namespace std;

int main(){
    int A[MAX][MAX];
    int B[MAX][MAX];
    int C[MAX][MAX];
    int N;

cout<<"Introduzca el valor de N: ";
cin>>N;

/**Introduzca la matriz A**/
cout<<"Introduce la matriz A"<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;i++){
            cout<<"["<<i<<"] ["<<j<<"]: ";
            cin>>A[i][j];

        }
        cout<<endl;
    }
cout<<"Introduce la matriz B";
    for(int i=0;i<N;i++){
        for(int j=0;j<N;i++){
            cout<<"["<<i<<"] ["<<j<<"]: ";
            cin>>B[i][j];

        }
        cout<<endl;
    }



   for(int i=0;i<N;i++){
        for(int j=0;j<N;i++){
            C[i][j] = A[i][j] + B[i][j];

        }
    }

cout<<"La matriz suma C es: ";
   for(int i=0;i<N;i++){
        for(int j=0;j<N;i++){
            cout<<C[i][j]<<" ";

        }
        cout<<endl;
    }

return 0;
}
