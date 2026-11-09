#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {

    array<int, 20> numeros = {
        21, 25, 31, 35, 49,
        51, 53, 55, 57, 59,
        61, 63, 65, 67, 69,
        1, 3, 5, 7, 9
    };

    // a) Imprimir todos los elementos
    cout << "a) Todos los elementos:\n";

    for (int n : numeros)
        cout << n << " ";

    // b) Mayores de 20 y menores de 50
    cout << "\n\nb) Mayores de 20 y menores de 50:\n";

    for (int n : numeros)
        if (n > 20 && n < 50)
            cout << n << " ";

    // c) Ordenar e imprimir
    sort(numeros.begin(), numeros.end());

    cout << "\n\nc) Elementos ordenados:\n";

    for (int n : numeros)
        cout << n << " ";

    // d) Indices impares menores de 10
    cout << "\n\nd) Indices impares menores de 10:\n";

    for (int i = 1; i < 10; i += 2)
        cout << numeros[i] << " ";

    cout << endl;

    return 0;
}