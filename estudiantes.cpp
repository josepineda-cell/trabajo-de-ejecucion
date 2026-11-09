#include <iostream>
#include <array>
#include <fstream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    int nacimiento;
    float gpa;
};

int main() {

    // Inicializar solo 2 estudiantes
    array<Estudiante, 10> estudiantes = {{
        {"Juan", 2000, 3.4},
        {"Maria", 2005, 2.8}
    }};

    // a) Tercer y cuarto estudiante por teclado
    for (int i = 2; i < 4; i++) {

        cout << "Estudiante " << i + 1 << endl;

        cout << "Nombre: ";
        cin >> estudiantes[i].nombre;

        cout << "Anio de nacimiento: ";
        cin >> estudiantes[i].nacimiento;

        cout << "GPA: ";
        cin >> estudiantes[i].gpa;

        cout << endl;
    }

    // b) Quinto y sexto desde arrays basicos
    string nombres[] = {"Gaby", "Patty", "Diana"};
    int nacimientos[] = {2002, 2004, 2006};
    float gps[] = {3.8, 3.0, 2.9};

    for (int i = 0; i < 2; i++) {
        estudiantes[i + 4] = {
            nombres[i],
            nacimientos[i],
            gps[i]
        };
    }

    // c) Cuatro estudiantes desde datos.txt
    ifstream archivo("datos.txt");

    if (!archivo) {
        cout << "Error al abrir datos.txt\n";
        return 1;
    }

    for (int i = 6; i < 10; i++) {

        if (!(archivo >> estudiantes[i].nombre
                      >> estudiantes[i].nacimiento
                      >> estudiantes[i].gpa)) {

            cout << "Error al leer datos.txt\n";
            return 1;
        }
    }

    archivo.close();

    // d) Mostrar datos, edad y beca
    cout << "\n=== LISTA DE ESTUDIANTES ===\n";

    for (Estudiante e : estudiantes) {

        cout << "\nNombre: " << e.nombre;
        cout << "\nNacimiento: " << e.nacimiento;
        cout << "\nEdad aproximada: "
             << 2026 - e.nacimiento;
        cout << "\nGPA: " << e.gpa;

        if (e.gpa >= 3.5)
            cout << "\nBeca: SI\n";
        else
            cout << "\nBeca: NO\n";
    }

    return 0;
}