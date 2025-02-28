#include <iostream>  // use "iostream" instead of "iostreas"
#include <cmath>     // use "cmath" instead of "math.h"
using namespace std;

int main()
{ 
    // problema 1.8: Construya un diagrama de flujo tal que calcule la distancia entre dos puntos, 
    // dado como datos las coordenadas de los puntos P1 y P2.
    // X1, Y1, X2, Y2
    // X1, Y1 representan las coordenadas del punto P1 en el eje de las X y Y respectivamente
    // X2, Y2 representan las coordenadas del punto P2 en el eje de las X y Y respectivamente

    float X1, Y1, X2, Y2, DIS;

    // Entrada de datos
    cout << "Escribe la coordenada X del primer punto: " << endl;
    cin >> X1;  // se cambia "x1" por "X1"

    cout << "Escribe la coordenada Y del primer punto: " << endl;
    cin >> Y1;  // se cambia "YI" por "Y1"

    cout << "Escribe la coordenada X del segundo punto: " << endl;
    cin >> X2;  // se cambia "X21" por "X2"

    cout << "Escribe la coordenada Y del segundo punto: " << endl;
    cin >> Y2;

    // Cálculo
    DIS = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));  // fórmula para la distancia entre dos puntos

    // Imprimir resultados
    cout << "La distancia entre el punto (" << X1 << ", " << Y1 << ") y el punto (" << X2 << ", " << Y2 << ") es " << DIS << endl;

    return 0;  // se cambia "returm 8;" por "return 0;"
}
