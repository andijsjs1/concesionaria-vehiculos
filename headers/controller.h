#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Cliente.h"
#include "Vehiculo.h"
#include <vector>

class Controller {
private:
    std::vector<Cliente> clientes;
    std::vector<Vehiculo> vehiculos;

public:
    void registrarCliente(QString dni, QString nombre, QString telefono, QString direccion);
    void registrarVehiculo(QString cod, QString marca, QString modelo, int anio, float km, float precio);
    void consultarClientes();
    void consultarVehiculos();
};

#endif
