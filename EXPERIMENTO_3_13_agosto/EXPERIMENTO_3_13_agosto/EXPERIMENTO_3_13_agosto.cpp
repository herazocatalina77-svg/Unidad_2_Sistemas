// EXPERIMENTO_3_13_agosto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <cstdlib>
using namespace std;
// Variables globales
int global_inicializada = 42;
int global_no_inicializada;

int main() {    // Variable local (stack)
    int a = 10;
    int b = 20; //al compilar paso por paso la variable, da el número 3265
    /**********************************************************
    EXPERIMENTO 3
    ***********************************************************/
    cout << "global_inicializada: " << global_inicializada << endl;
    cout << "global_no_inicializada: " << global_no_inicializada << endl;

    global_inicializada = 69;
    global_no_inicializada = 666;
    cout << "global_inicializada: " << global_inicializada << endl;
    cout << "global_no_inicializada: " << global_no_inicializada << endl;
    /********************************************************/
    return 0;
}
