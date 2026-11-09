#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    // Inicializar solo 10 paises
    array<string, 12> paises = {
        "Argentina", "Bolivia", "Brasil",
        "Chile", "Colombia", "Ecuador",
        "Guyana", "Paraguay", "Peru",
        "Surinam"
    };

    // a) Insertar los 2 paises restantes
    paises.at(10) = "Uruguay";
    paises[11] = "Venezuela";

    cout << "a) Paises agregados:\n";
    cout << paises.at(10) << endl;
    cout << paises[11] << endl;

    // b) Paises que inician con C o P
    cout << "\nb) Paises que inician con C o P:\n";

    for (string p : paises)
        if (p[0] == 'C' || p[0] == 'P')
            cout << p << endl;

    // c) Primer y ultimo elemento
    cout << "\nc) Primer elemento: " << paises.front();
    cout << "\nUltimo elemento: " << paises.back();

    // d) Ordenar e imprimir
    sort(paises.begin(), paises.end());

    cout << "\n\nd) Paises ordenados:\n";

    for (string p : paises)
        cout << p << endl;

    return 0;
}