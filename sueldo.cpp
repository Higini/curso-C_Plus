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

    float sueldo, pago;
    char categoria, condicion;

    cout<<"¿Categoria: A,B,C o D?";
    cin>>categoria;
    cout<<"¿Condicion: Estable (E) o no estable (N)?";
    cin>>condicion;
    cout<<"¿Sueldo:?";
    cin>>sueldo;


    if(condicion == 'E'){
        switch(categoria){
            case 'A': pago = 1.2*sueldo*(1-0.06);
                cout<<"El pago es "<<pago<<endl;
                break;
            case 'B': pago = 1.18*sueldo*(1-0.06);
                cout<<"El pago es "<<pago<<endl;
                break;
            case 'C': pago = 1.15*sueldo*(1-0.06);
                cout<<"El pago es "<<pago<<endl;
                break;
            case 'D': pago = 1.12*sueldo*(1-0.06);
                cout<<"El pago es "<<pago<<endl;
                break;
            default: cout<<"Categoria erronea"<<endl;
            }
    } else if(condicion == 'N'){
        switch(categoria){
            case 'A': pago = 1.17*sueldo*(1-0.04);
                cout<<"El pago es "<<pago<<endl;
                break;
            case 'B': pago = 1.15*sueldo*(1-0.04);
                cout<<"El pago es "<<pago<<endl;
                break;
            case 'C': pago = 1.14*sueldo*(1-0.04);
                cout<<"El pago es "<<pago<<endl;
                break;
            case 'D': pago = 1.10*sueldo*(1-0.04);
                break;
            default: cout<<"Categoria erronea"<<endl;
        }
    }else{
    cout<<"La condicion es erronea"<<endl;
    }

    return 0;
}
