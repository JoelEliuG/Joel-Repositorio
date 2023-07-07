#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Variables para almacenar los datos
    string cliente;
    double distancia;
    double costo_gasolina;
    double eficiencia_minima;
    double eficiencia_maxima;
    double costo_llantas;
    double costo_seguro_anual;
    double costo_cambio_aceite;

    // Pedir los datos al usuario
    cout << "Nombre del cliente: ";
    getline(cin, cliente);
    cout << "Distancia a recorrer (en km): ";
    cin >> distancia;
    cout << "Valor de la gasolina (RD$ x gal): ";
    cin >> costo_gasolina;
    cout << "Eficiencia mínima del vehículo (L/100km): ";
    cin >> eficiencia_minima;
    cout << "Eficiencia máxima del vehículo (L/100km): ";
    cin >> eficiencia_maxima;
    cout << "Costo de las llantas (RD$ x unidad): ";
    cin >> costo_llantas;
    cout << "Costo del seguro anual (RD$): ";
    cin >> costo_seguro_anual;
    cout << "Costo del cambio de aceite (RD$): ";
    cin >> costo_cambio_aceite;

    // Cálculo del gasto en combustible
    double eficiencia_promedio = (eficiencia_minima + eficiencia_maxima) / 2;
    double gasto_combustible = (distancia / 100) * eficiencia_promedio * costo_gasolina;

    // Cálculo de los gastos varios
    double costo_llantas_km = costo_llantas / 45000;
    double costo_seguro_km = costo_seguro_anual / 15000;
    double costo_aceite_km = costo_cambio_aceite / 25000;

    double gastos_varios = (costo_llantas_km + costo_seguro_km + costo_aceite_km) * distancia;

    // Cálculo del total
    double total = gasto_combustible + gastos_varios;

    // Imprimir la tabla con los resultados
    cout << "Cliente\tDistancia\tGasto en Combustible\tGastos Varios\tTotal" << endl;
    cout << cliente << "\t" << fixed << setprecision(2) << distancia << "\t"
         << gasto_combustible << "\t\t" << gastos_varios << "\t\t" << total << endl;

    return 0;
}

