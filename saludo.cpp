#include "saludo.h"

void Saludo::mostrarSaludo(const std::string& nombre) {
    time_t t = time(0);
    tm* now = localtime(&t);
    char fecha[20];
    strftime(fecha, sizeof(fecha), "%Y-%m-%d", now);


    std::cout << "Hola Mundo. Saludo de " << nombre << " hoy " << fecha << " ." << std::endl;
}
