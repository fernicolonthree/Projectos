#include <iostream>
using namespace std;

int main() {
    double gano; // Variable para almacenar el salario del empleado
    int mesesTrabajados; // Variable para almacenar los meses trabajados

    // Pedimos al usuario que introduzca el salario y los meses trabajados
    cout << "Introduzca el salario anual del empleado: ";
    cin >> gano;
    cout << "Introduzca los meses trabajados en la compañía: ";
    cin >> meses;

    // Verificamos si el empleado cumple con los requisitos para el bono
    if (gano >= 15000 && meses > 6) {
        cout << "El empleado tiene derecho a un bono." << endl;
    } else {
        cout << "El empleado no tiene derecho a un bono." << endl;
    }

    return 0;
}
