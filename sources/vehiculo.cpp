#include "../headers/Vehiculo.h"
#include <iostream>

Vehiculo::Vehiculo(QString codigo, QString marca, QString modelo, int anio, float kilometraje, float precio)
    : codigo(codigo), marca(marca), modelo(modelo), anio(anio), kilometraje(kilometraje), precio(precio) {}

void Vehiculo::mostrar() const {
    std::cout << "Codigo: " << codigo.toStdString()
              << ", Marca: " << marca.toStdString()
              << ", Modelo: " << modelo.toStdString()
              << ", Anio: " << anio
              << ", Km: " << kilometraje
              << ", Precio: $" << precio << "\n";
}
