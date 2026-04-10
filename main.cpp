#include <iostream>
#include <string>

struct Alumno {
    std::string nombre;
    std::string apellido;
    std::string dni;
    double calificacion;
};

int main() {
    const int numAlumnos = 4;

    Alumno listaAlumnos[numAlumnos] = {
        {"Juan", "Lopes", "44567234P", 0},
        {"Laura", "Peres", "23456981F", 0},
        {"Carlos", "Lopes", "44567342G", 0},
        {"Maria", "Gutierre", "44567342P", 0}
    };

    std::string DNIsolicitado;
    bool alumnoEncontrado = false;

    std::cout << "Introduzca el DNI del alumno: ";
    std::cin >> DNIsolicitado;

    for (int i = 0; i < numAlumnos; i++) {
        if (listaAlumnos[i].dni == DNIsolicitado) {

            std::cout << "Introduce la calificación para "
                      << listaAlumnos[i].nombre << " "
                      << listaAlumnos[i].apellido << ": ";

            std::cin >> listaAlumnos[i].calificacion;

            std::cout << "El alumno "
                      << listaAlumnos[i].nombre << " "
                      << listaAlumnos[i].apellido
                      << " ha obtenido un "
                      << listaAlumnos[i].calificacion << "\n";

            alumnoEncontrado = true;
            break;
        }
    }

    if (!alumnoEncontrado) {
        std::cout << "No se encontró ningún alumno con el DNI ingresado.\n";
    }

    return 0;
}
