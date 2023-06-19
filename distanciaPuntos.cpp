#include <iostream>
#include <cmath>

using namespace std;

int main (){
/** Calcular la distancia entre dos puntos (P_1 y P_2) localizados
en un plano XY.
raiz ((x2-x1)^2+(y2-y1^2)) **/

int x1, x2, y1, y2;
double distancia;

cout<<"Introduce las coordenadas del PRIMER PUNTO del plano"<<endl;
cout<<"X :";
cin>>x1;
cout<<"Y :";
cin>>y1;

cout<<"Introduce las coordenadas del SEGUNDO PUNTO del plano"<<endl;
cout<<"X :";
cin>>x2;
cout<<"Y :";
cin>>y2;

distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

cout<<"La distancia entre los 2 puntos es "<<distancia<<endl;

return 0;
}
