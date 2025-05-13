#ifndef VEHICULO_H
#define VEHICULO_H

#include <QString>

class Vehiculo {
private:
    QString codigo;
    QString marca;
    QString modelo;
    int anio;
    float kilometraje;
    float precio;

public:
    Vehiculo(QString codigo, QString marca, QString modelo, int anio, float kilometraje, float precio);
    void mostrar() const;
};

#endif
