#include <iostream>
using namespace std;

int main(){
    /**
    **/
    int A[]={6,5,9,3,0,1,8,7,4,2};
        for(int i=0;i<10;i++){
            for(int e=0;e<9;e++){
                if(A[e]<A[e+1]){
                        cout<<"if anidado: "<<e<<" ";

                }
            }

            cout<<"FOR externo: "<<i<<" "<<endl;
        }

       /* for(int e=0;e<10;e++){
            cout<<A[e]<<" ";
        } */
    return 0;
}
