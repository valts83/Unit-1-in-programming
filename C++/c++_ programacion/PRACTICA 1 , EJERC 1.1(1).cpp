
#include "iostream"
#include "string"

using namespace std;

int main()
{
    //Problema 1.1
    //Construya un diagrama de flujo que dado el costo de un artículo vendido y la cantidad
    //de dinero entregada por el cliente, calcule e imprima el cambio que debe entregar

    //Declaración de variables
    float PRECIOPRODUCTO, DEVOLUCION;
    float PAGO;

    //Entrada de datos
    cout << "Escribe el costo del articulo" << "\n";
    cin >> PRECIOPRODUCTO;

    cout << "Escribe cuanto fue el pago del articulo" << "\n";
    cin >> PAGO;

    //CÁLCULO DE DEVOLUCIÓN
    DEVOLUCION = PAGO - PRECIOPRODUCTO;

    //SE IMPRIME RESULTADOS
    cout << "El cambio del cliente es " << DEVOLUCION;

    return 0;
}

