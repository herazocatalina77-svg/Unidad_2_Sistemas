// EXPERIMENTO_2_13_AGOSTO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
#include <cstdlib>
using namespace std;
// Constante global
const char* const mensaje_ro = "Hola, memoria de solo lectura"; //al crear esta variable como constante, no se permite reemplazarla por otra dirección

int main() {
    // Variable local (stack)
	int a = 1; 
    int b = 20;

    /**********************************************************
    EXPERIMENTO 2
    ***********************************************************/
    char* ptr = (char*)&mensaje_ro;
    cout << "Voy a modificar la memoria en la dirección: " << ptr << endl;
	*ptr = 0; //por eso cuando la asignamos aquí, nos sale error porque queremos reemplazar la dirección de memoria de la variable constante
    /********************************************************/
    return 0;
}