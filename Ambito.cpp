#include <iostream>
using namespace std;
int i=100; //variable global
int main(){
    /** Ambito de una variable **/
//int i=10;
    for(;;i++){
            cout<<i<<endl; //variable local dentro del �mbito for
        if(true){

            cout<<i<<endl; //variable local dentro del �mbito if
        }
    }

    return 0;
}


