
#include "iostream"
#include "string"

using namespace std;

int main()
{
    //Problema 1.1
    //Construya un diagrama de flujo que dado el costo de un art�culo vendido y la cantidad
    //de dinero entregada por el cliente, calcule e imprima el cambio que debe entregar

    //Declaraci�n de variables
    float PRECIOPRODUCTO, DEVOLUCION;
    float PAGO;

    //Entrada de datos
    cout << "Escribe el costo del articulo" << "\n";
    cin >> PRECIOPRODUCTO;

    cout << "Escribe cuanto fue el pago del articulo" << "\n";
    cin >> PAGO;

    //C�LCULO DE DEVOLUCI�N
    DEVOLUCION = PAGO - PRECIOPRODUCTO;

    //SE IMPRIME RESULTADOS
    cout << "El cambio del cliente es " << DEVOLUCION;

    return 0;
}

