#include <iostream>
using namespace std;

int main(){
    int N;
    cout<<"Introduce N: ";
    cin>>N;

    while(N>0){
        for(int i=0;i<N;i++){
        cout<<"*";
        }
    N--;
    cout<<endl;

    }

return 0;
}
