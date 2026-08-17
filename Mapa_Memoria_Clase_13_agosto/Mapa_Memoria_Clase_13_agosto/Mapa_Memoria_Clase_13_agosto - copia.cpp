#include <iostream>
#include <cstdlib>
using namespace std;
//Variables
int variable1 = 1;
const char* const variableConstante = "tiki";
//HEAP

//STACK

//NOTAS
void* ptr = reinterpret_cast<void*>(&main);
int main() {
	//nooooooooooooooooooooooooooooooo
}
//// Variables globales
//int global_inicializada = 42;
//int global_no_inicializada;
//// Constante global
//// Función de ejemplo que muestra la dirección de su variable local estática
//void funcionConStatic() {
//    static int var_estatica = 100;
//    cout << "Dirección de var_estatica (static): " << &var_estatica << endl;
//}
//// Función que asigna memoria dinámica (heap)
//int* crearArrayHeap(int tam) {
//    int* arr = new int[tam];
//    for (int i = 0; i < tam; i++) {
//        arr[i] = i;
//    }    return arr;
//}
//// Una función simple para representar el código (se encontrará en la región de código)
//int suma(int a, int b) {
//    int c = a + b; // "c" es una variable local (stack)
//    return c;
//}
//int main() {
//    // Variable local (stack)
//    int a = 10;
//    int b = 20;
//    int c = suma(a, b);
//    cout << "Resultado de suma(a, b): " << c << endl;
//    cout << "Dirección de variable local 'a': " << &a << endl;
//    cout << "Dirección de variable local 'b': " << &b << endl;
//    cout << "Dirección de la variable local 'c' (resultado): " << &c << endl;
//    // Variables globales
//    cout << "Dirección de 'global_inicializada': " << &global_inicializada << endl;
//    cout << "Dirección de 'global_no_inicializada': " << &global_no_inicializada << endl;
//    // Constante global (solo lectura)
//    cout << "Dirección de 'mensaje_ro' (zona de solo lectura): " << static_cast<const void*>(mensaje_ro) << endl;
//    // Llamada a función que tiene variable estática
//    funcionConStatic();
//    // Uso del Heap: asignación dinámica
//    int tamArray = 10;
//    int* arrayHeap = crearArrayHeap(tamArray);
//    cout << "Dirección del primer elemento del array asignado en Heap: " << arrayHeap << endl;
//    for (int i = 0; i < tamArray; i++) {
//        cout << "arrayHeap[" << i << "] = " << arrayHeap[i] << " en " << (arrayHeap + i) << endl;
//    }
//    delete[] arrayHeap; // Liberamos la memoria dinámica
//    return 0;
//}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
