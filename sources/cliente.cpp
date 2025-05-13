#include "../headers/Cliente.h"
#include <iostream>

Cliente::Cliente(QString dni, QString nombre, QString telefono, QString direccion)
    : dni(dni), nombre(nombre), telefono(telefono), direccion(direccion) {}

void Cliente::mostrar() const {
    std::cout << "DNI: " << dni.toStdString()
    << ", Nombre: " << nombre.toStdString()
    << ", Telefono: " << telefono.toStdString()
    << ", Direccion: " << direccion.toStdString() << "\n";
}
