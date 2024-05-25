#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // Variable para almacenar la opcion del menu
    char opcionMenu;

    // Ciclo principal del menu
    do {
        // Mostrar el menu de opciones
        cout << "MENU\n"
             << "A - Facturacion por Servicios de Internet\n"
             << "B - Tabla ASCII para un Rango en Particular\n"
             << "C - Estadisticas de Accidentes Automobilisticos Anuales\n"
             << "D - Factura Renta de Equipos\n"
             << "E - Depreciacion de un Activo por el Metodo de la Linea Recta\n"
             << "F - Fin\n"
             << "Entre la letra de la opcion deseada -----> ";
        cin >> opcionMenu;

        // Convertir a mayuscula si el usuario introduce una letra minuscula
        if (opcionMenu >= 'a' && opcionMenu <= 'z') {
            opcionMenu = (char)((int)opcionMenu - 32);
        }

        // Validar que la opcion sea valida
        while (opcionMenu < 'A' || opcionMenu > 'F') {
            cout << "Error: Opcion invalida. Por favor entre A, B, C, D, E o F." << endl;
            cout << "Entre la letra de la opcion deseada -----> ";
            cin >> opcionMenu;

            // Convertir a mayuscula si el usuario introduce una letra minuscula
            if (opcionMenu >= 'a' && opcionMenu <= 'z') {
                opcionMenu = (char)((int)opcionMenu - 32);
            }
        }

        // Procesar la opcion seleccionada
        if (opcionMenu == 'A') { // Opcion A: Facturacion por Servicio de Internet
            // Variables para la opcion A
            char tipoContrato;       // Tipo de contrato del cliente ('A', 'B' o 'C')
            double horas;            // Numero de horas de conexion en el mes
            double costoBase;        // Costo base mensual del contrato
            double costoPorHoraExtra; // Costo por horas adicionales al contrato
            double horasExceso;      // Horas en exceso a lo establecido por el contrato
            double costoExceso;      // Costo total por horas en exceso
            double totalPagar;       // Total a pagar

            // Descripcion de los contratos de servicio de Internet
            cout << "\nUsted selecciono la opcion A - Facturacion por Servicio de Internet\n"
                 << endl;
            cout << "DESCRIPCION DE LOS CONTRATOS\n"
                 << endl;
            cout << "-->  CONTRATO A:\n       $39.95/mes\n       10 hrs de acceso a internet\n       $3.50/hr adicional\n"
                 << endl;
            cout << "-->  CONTRATO B:\n       $45.95/mes\n       20 hrs de acceso a internet\n       $2.50/hr adicional\n"
                 << endl;
            cout << "-->  CONTRATO C:\n       $70.95/mes\n       hrs de acceso a internet ILIMITADAS\n"
                 << endl;
            cout << "Entre la letra correspondiente al contrato del cliente: ";
            cin >> tipoContrato;

            // Convertir a mayuscula si el usuario introduce una letra minuscula
            if (tipoContrato >= 'a' && tipoContrato <= 'z') {
                tipoContrato = (char)((int)tipoContrato - 32);
            }

            // Validar que el tipo de contrato sea valido
            while (tipoContrato != 'A' && tipoContrato != 'B' && tipoContrato != 'C') {
                cout << "Error: Tipo de contrato invalido. Por favor entre A, B, o C." << endl;
                cout << "Entre la letra correspondiente al contrato del cliente: ";
                cin >> tipoContrato;

                // Convertir a mayuscula si el usuario introduce una letra minuscula
                if (tipoContrato >= 'a' && tipoContrato <= 'z') {
                    tipoContrato = (char)((int)tipoContrato - 32);
                }
            }

            // Solicitar el numero de horas de conexion del cliente
            cout << "Entre el numero de horas de conexion del cliente en este mes: ";
            cin >> horas;

            // Validar que las horas no sean negativas
            while (horas < 0) {
                cout << "Error: Las horas de conexion no pueden ser negativas." << endl;
                cout << "Entre el numero de horas de conexion del cliente en este mes: ";
                cin >> horas;
            }

            // Calcular el costo basado en el tipo de contrato
            if (tipoContrato == 'A') {
                costoBase = 39.95;
                costoPorHoraExtra = 3.50;
                if (horas > 10) {
                    horasExceso = horas - 10;
                    costoExceso = horasExceso * costoPorHoraExtra;
                } else {
                    horasExceso = 0;
                    costoExceso = 0;
                }
            } else if (tipoContrato == 'B') {
                costoBase = 45.95;
                costoPorHoraExtra = 2.50;
                if (horas > 20) {
                    horasExceso = horas - 20;
                    costoExceso = horasExceso * costoPorHoraExtra;
                } else {
                    horasExceso = 0;
                    costoExceso = 0;
                }
            } else { // tipoContrato == 'C'
                costoBase = 70.95;
                horasExceso = 0;
                costoExceso = 0;
            }
            totalPagar = costoBase + costoExceso;

            // Mostrar el reporte de la factura mensual del cliente
            cout << "\n====================================================================="
                 << endl;
            cout << "FACTURA MENSUAL DEL CLIENTE\n"
                 << endl;
            cout << "DATOS DEL CONTRATO" << endl;
            cout << "Tipo de Contrato: \t\t\t\t\t" << tipoContrato << endl;
            cout << fixed << setprecision(2);
            cout << "Costo Base Mensual del Contrato: \t\t\t$" << costoBase << endl;
            cout << "Valor de Horas Extras: \t\t\t\t\t$" << costoPorHoraExtra << "\n"
                 << endl;
            cout << "DATOS DEL CONSUMO DE ESTE MES" << endl;
            cout << "Horas de conexion en este mes:\t\t\t\t" << horas << endl;
            cout << "Horas en exceso a lo establecido por el contrato:\t" << horasExceso << endl;
            cout << "Costo por horas en exceso consumidas este mes: \t\t$" << costoExceso << "\n"
                 << endl;
            cout << "TOTAL A PAGAR \t\t\t\t\t\t$" << totalPagar << "\n"
                 << endl;
            cout << "====================================================================="
                 << endl;

        } else if (opcionMenu == 'B') { // Opcion B: Tabla ASCII para un Rango en Particular
            // Variables para la opcion B
            int valorInicial;        // Valor inicial para generar la tabla ASCII
            int valorFinal;          // Valor final para generar la tabla ASCII

            cout << "\nUsted selecciono la opcion B - Tabla ASCII para un Rango en Particular\n"
                 << endl;
            // Solicitar el valor inicial (vi) para generar la tabla ASCII
            cout << "Entre el valor inicial: ";
            cin >> valorInicial;

            // Validar que vi este en el rango de 0 a 255
            while (valorInicial < 0 || valorInicial > 255) {
                cout << "Error: El valor inicial debe estar entre 0 y 255." << endl;
                cout << "Entre el valor inicial: ";
                cin >> valorInicial;
            }

            // Solicitar el valor final (vf) para generar la tabla ASCII
            cout << "Entre el valor final: ";
            cin >> valorFinal;

            // Validar que vf no sea menor que vi ni mayor que 255
            while (valorFinal < valorInicial || valorFinal > 255) {
                cout << "Error: El valor final debe ser mayor o igual al valor inicial y menor o igual a 255." << endl;
                cout << "Entre el valor final: ";
                cin >> valorFinal;
            }

            // Generar la tabla ASCII
            cout << "\n-------------------------------------------------------------------------------------------------------------------\n"
                 << "Tabla ASCII desde caracter " << valorInicial << " hasta caracter " << valorFinal << ":\n";
            for (int i = valorInicial; i <= valorFinal; ++i) {
                cout << i << "-" << (char)i << "\t";
            }
            cout << "\n-------------------------------------------------------------------------------------------------------------------\n";

        } else if (opcionMenu == 'C') { // Opcion C: Estadisticas de Accidentes Automobilisticos Anuales
            // Variables para la opcion C
            int accidentes;          // Numero de accidentes en un mes
            int totalAccidentes = 0; // Total de accidentes en el año
            double promedioAccidentes; // Promedio mensual de accidentes
            int mayorAccidentes = 0; // Mayor numero de accidentes en un mes
            int menorAccidentes = 999999; // Menor numero de accidentes en un mes (inicializado con un valor alto)
            int mesMayorAccidentes = 0; // Mes con el mayor numero de accidentes
            int mesMenorAccidentes = 0; // Mes con el menor numero de accidentes

            cout << "\nUsted selecciono la opcion C - "
                 << "Estadisticas de Accidentes Automobilisticos Anuales"
                 << endl;
            cout << "Entre el numero de accidentes de transito registrados para cada mes del año:\n";

            // Solicitar el numero de accidentes para cada mes e identificar el mayor y menor
            for (int mes = 1; mes <= 12; ++mes) {
                cout << "Mes " << mes << ": ";
                cin >> accidentes;

                // Validar que la cantidad de accidentes no sea negativa
                while (accidentes < 0) {
                    cout << "Error: La cantidad de accidentes no puede ser negativa.\n";
                    cout << "Mes " << mes << ": ";
                    cin >> accidentes;
                }

                // Actualizar el total de accidentes
                totalAccidentes += accidentes;

                // Identificar el mayor numero de accidentes y el mes
                if (accidentes > mayorAccidentes) {
                    mayorAccidentes = accidentes;
                    mesMayorAccidentes = mes;
                }

                // Identificar el menor numero de accidentes y el mes
                if (accidentes < menorAccidentes) {
                    menorAccidentes = accidentes;
                    mesMenorAccidentes = mes;
                }
            }

            // Calcular el promedio mensual de accidentes
            promedioAccidentes = static_cast<double>(totalAccidentes) / 12;

            // Mostrar el resumen anual de accidentes
            cout << "-------------------------------------------------------------------------------------------------------------------\n";
            cout << "RESUMEN ANUAL - ESTADISTICAS ACCIDENTES DE AUTO\n";
            cout << "Total de Accidentes Anual: " << totalAccidentes << endl;
            cout << fixed << setprecision(1) << "Promedio Mensual de Accidentes: " << promedioAccidentes << endl;
            cout << "Menor Numero de Accidentes en un Mes: " << menorAccidentes << " (Mes " << mesMenorAccidentes << ")\n";
            cout << "Mayor Numero de Accidentes en un Mes: " << mayorAccidentes << " (Mes " << mesMayorAccidentes << ")\n";
            cout << "-------------------------------------------------------------------------------------------------------------------\n";

        } else if (opcionMenu == 'D') { // Opcion D: Factura Renta de Equipos
            // Variables para la opcion D
            int cantidadEquipos;   // Cantidad de equipos rentados
            char descripcion[50];  // Descripcion del equipo rentado
            int diasRenta;         // Dias de renta del equipo
            double precioDiario;    // Precio diario de renta del equipo
            double totalFactura = 0;   // Total a pagar por la renta del equipo

            // Solicitar la cantidad de equipos a rentar
            cout << "\nUsted selecciono la opcion D - Factura Renta de Equipos" << endl;
            cout << "Entre la cantidad de equipos a rentar: ";
            cin >> cantidadEquipos;

            // Validar que la cantidad de equipos sea al menos 1
            while (cantidadEquipos <= 0) {
                cout << "Error: La cantidad de equipos debe ser al menos 1.\n";
                cout << "Entre la cantidad de equipos a rentar: ";
                cin >> cantidadEquipos;
            }

            // Solicitar los detalles de cada equipo y calcular el costo
            for (int i = 1; i <= cantidadEquipos; ++i) {
                cout << "\nEquipo #" << i << endl;

                // Ignorar el salto de línea en el buffer de entrada
                cin.ignore();

                // Solicitar la descripcion del equipo
                cout << "Descripcion: ";
                cin.getline(descripcion, 50);

                // Solicitar los dias de renta
                cout << "Dias de renta: ";
                cin >> diasRenta;

                // Validar que los dias de renta sean al menos 1
                while (diasRenta <= 0) {
                    cout << "Error: Los dias de renta deben ser al menos 1.\n";
                    cout << "Dias de renta: ";
                    cin >> diasRenta;
                }

                // Solicitar el precio diario
                cout << "Precio diario: $";
                cin >> precioDiario;

                // Validar que el precio diario sea positivo
                while (precioDiario <= 0) {
                    cout << "Error: El precio diario debe ser positivo.\n";
                    cout << "Precio diario: $";
                    cin >> precioDiario;
                }

                // Calcular y mostrar el costo de la renta del equipo
                double costoEquipo = diasRenta * precioDiario;
                cout << fixed << setprecision(2);
                cout << "Costo de renta del equipo: $" << costoEquipo << endl;

                // Actualizar el total de la factura
                totalFactura += costoEquipo;
            }

            // Mostrar el total a pagar por la renta de los equipos
            cout << "\n==============================================" << endl;
            cout << "TOTAL A PAGAR: $" << totalFactura << endl;
            cout << "==============================================" << endl;

        } else if (opcionMenu == 'E') { // Opcion E: Depreciacion de un Activo por el Metodo de la Linea Recta
            // Variables para la opcion E
            double precioCompra;     // Precio de compra del activo
            int anosDepreciacion;   // Numero de años de depreciacion
            double valorSalvamento; // Valor de salvamento del activo
            double depreciacionAnual; // Depreciacion anual del activo
            double valorActual;     // Valor del activo al final de cada año

            cout << "\nUsted selecciono la opcion E - "
                 << "Depreciacion de un Activo por el Metodo de la Linea Recta"
                 << endl;
            // Solicitar los datos del activo
            cout << "Entre el precio de compra del activo: $";
            cin >> precioCompra;

            // Validar que el precio de compra sea positivo
            while (precioCompra <= 0) {
                cout << "Error: El precio de compra debe ser positivo.\n";
                cout << "Entre el precio de compra del activo: $";
                cin >> precioCompra;
            }

            cout << "Entre el numero de anos de depreciacion: ";
            cin >> anosDepreciacion;

            // Validar que los anos de depreciacion sean al menos 1
            while (anosDepreciacion <= 0) {
                cout << "Error: Los anos de depreciacion deben ser al menos 1.\n";
                cout << "Entre el numero de anos de depreciacion: ";
                cin >> anosDepreciacion;
            }

            cout << "Entre el valor de salvamento del activo: $";
            cin >> valorSalvamento;

            // Validar que el valor de salvamento sea menor que el precio de compra
            while (valorSalvamento >= precioCompra) {
                cout << "Error: El valor de salvamento debe ser menor que el precio de compra.\n";
                cout << "Entre el valor de salvamento del activo: $";
                cin >> valorSalvamento;
            }

            // Calcular la depreciacion anual
            depreciacionAnual = (precioCompra - valorSalvamento) / anosDepreciacion;

            // Mostrar la tabla de depreciacion
            cout << "\n--------------------------------------------------------------------------------------------------------\n";
            cout << "TABLA DE DEPRECIACION\n";
            cout << "Ano\tDepreciacion\tValor de Fin de Ano\n";
            cout << "--------------------------------------------------------------------------------------------------------\n";

            // Calcular y mostrar la depreciacion para cada ano
            valorActual = precioCompra;
            for (int ano = 1; ano <= anosDepreciacion; ++ano) {
                valorActual -= depreciacionAnual;
                cout << fixed << setprecision(2);
                cout << ano << "\t$" << depreciacionAnual << "\t\t$" << valorActual << endl;
            }
            cout << "--------------------------------------------------------------------------------------------------------\n";

        } else { // opcionMenu == 'F'
            cout << "\nFin del programa. ¡Hasta luego!\n";
        }

    } while (opcionMenu != 'F');

    return 0;
} 
