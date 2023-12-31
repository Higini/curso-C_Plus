#include <iostream>
using namespace std;

int main(){
    /** Ordenamiento Burbuja
        5   3   1   6   4   2   7 -> secuencia a ordenar
        3   1   5   4   2   6   7 -> despues del primer paso
        1   3   4   2   5   6   7 -> despues del segundo paso
        1   3   2   4   5   6   7 -> despues del tercer paso
        1   2   3   4   5   6   7 -> despues del cuarto paso

        7   6   5   4   3   2   1 -> necesitaria 7 pasos
    **/
    int A[]={5,3,1,6,4,2,7};
        for(int i=0;i<7;i++){
            for(int e=0;e<6;e++){
                if(A[e]>A[e+1]){
                    int aux = A[e];
                    A[e] = A[e+1];
                    A[e+1] = aux;
                }
            }
        }

        for(int e=0;e<7;e++){
            cout<<A[e]<<" ";
        }
    return 0;
}
