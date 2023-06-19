#include <iostream>
using namespace std;

int main(){
    int N, e=0;
    cout<<"Introduce N: ";
    cin>>N;
/* El primer FOR salta la línea y el segundo FOR imprime
el número de asteriscos "*". */

        for(int i=1;i<=N;i++){
            for(e=1;e<=i;e++){
               cout<<"*";
            }
            cout<<endl;
        }

return 0;
}
