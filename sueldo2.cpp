#include <iostream>
using namespace std;
int main(){
    /**Introducir el sueldo de un trabajador, categoría,
    condición estable (E), o no estable (N) y reportar el
    pago total que se le debe hacer de acuerdo a lo siguiente.
    El porcentaje de bonificación con respecto al sueldo se calcula
    con respecto a la siguiente tabla:
    CATEGORIA       ESTABLE      NO ESTABLE
        A               20%         17%
        B               18%         15%
        C               15%         14%
        D               12%         10%
    El cálculo del descuento es con respecto al sueldo+bonificación
    Estable 6%      No Estable 4%
    **/

    float sueldo;
    char categoria, condicion;

    cout<<"¿Categoria: A,B,C o D?";
    cin>>categoria;
    cout<<"¿Condicion: Estable (E) o no estable (N)?";
    cin>>condicion;
    cout<<"¿Sueldo:?";
    cin>>sueldo;


    if(condicion == 'E'){
        switch(categoria){
            case 'A': sueldo = 1.20*sueldo;
                break;
            case 'B': sueldo = 1.18*sueldo;
                break;
            case 'C': sueldo = 1.15*sueldo;
                break;
            case 'D': sueldo = 1.12*sueldo;
                break;
            default: cout<<"Categoria erronea"<<endl;
            }

            sueldo = sueldo*0.94;

    } else if(condicion == 'N'){
        switch(categoria){
            case 'A': sueldo = 1.17*sueldo;
                break;
            case 'B': sueldo = 1.15*sueldo;
                break;
            case 'C': sueldo = 1.14*sueldo;
                break;
            case 'D': sueldo = 1.10*sueldo;
                break;
            default: cout<<"Categoria erronea"<<endl;
            }

            sueldo = sueldo*0.96;


    }else{
    cout<<"La condicion es erronea"<<endl;
    }
    cout<<"El sueldo a pagar es de "<<sueldo<<endl;

    return 0;
}
