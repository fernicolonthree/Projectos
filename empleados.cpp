#include <iostream> 

using namespace std;

int main() {
    int ne; // Declaramos la variable para almacenar el número de empleados

    cout << "Introduzca el número de empleados: "; // Pedimos al usuario que introduzca el número de empleados
    cin >> ne; // Leemos el número introducido por el usuario y lo almacenamos en la variable "ne"

    // Verificamos si el número de empleados está fuera del rango válido (1000-3000)
    if (ne < 1000 || ne > 3000) {  
        cout << "Compañía no válida. Complete este programa." << endl; // Si está fuera del rango, mostramos un mensaje de error
    } else {
        cout << "Compañía válida" << endl; // Si está dentro del rango, mostramos un mensaje de éxito
    }

    return 0; // Finalizamos el programa
}
