#include "../headers/Controller.h"
#include <iostream>

void Controller::registrarCliente(QString dni, QString nombre, QString telefono, QString direccion) {
    Cliente nuevo(dni, nombre, telefono, direccion);
    clientes.push_back(nuevo);
    std::cout << "Cliente registrado correctamente.\n";
}

void Controller::registrarVehiculo(QString cod, QString marca, QString modelo, int anio, float km, float precio) {
    Vehiculo nuevo(cod, marca, modelo, anio, km, precio);
    vehiculos.push_back(nuevo);
    std::cout << "Vehiculo registrado correctamente.\n";
}

void Controller::consultarClientes() {
    std::cout << "\n--- Lista de Clientes ---\n";
    for (const Cliente& c : clientes) {
        c.mostrar();
    }
}

void Controller::consultarVehiculos() {
    std::cout << "\n--- Lista de Vehiculos ---\n";
    for (const Vehiculo& v : vehiculos) {
        v.mostrar();
    }
}

