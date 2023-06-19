#include <iostream>
using namespace std;

int main(){
/** Convertir la temperatura en grados Celsius a
 Fahrenheit (C = 5 (F-32)/9) y kelvin (C= k - 273.15). **/

    float celsius, fahrenheit, kelvin;

    cout<<"Introduce la temperatura en grados Celsius ";
    cin>>celsius;
    fahrenheit = 9*celsius/5+32;
    kelvin = celsius + 273.15;
    cout<<"La temperatura en grados Fahrenheit es "<<fahrenheit<<endl;
    cout<<"La temperatura en grados Kelvin es "<<kelvin<<endl;

 return 0;

}
