#include "iostream"
#include "math.h"
using namespace std;

int main()
{ //problema 1.7 Construya un diagrama de flujo tal que dado como datos de los tres lados de un triangulo altura
//pueda determinar su area.
//L1,L2,L3 representan los tres lados del triangulo

float L1,L2,L3,S,AREA;
const float PI=3.141592;

//Entrada de datos
cout << " Escribe la medida del lado uno del triangulo " << "\n";
cin >> L1;

cout << " Escribe la medida del lado dos del triangulo " << "\n";
cin >> L2;

cout << " Escribe la medida del lado dos del triangulo " << "\n";
cin >> L3;

//CALCULO
S=(L1+L2+L3)/2;
AREA=sqrt(S*(S-L1)*(S-L2)*(S-L3));

//SE IMPRIME RESULTADOS
cout << " El area del triangulo " << AREA << "\n";

return 0;

}
