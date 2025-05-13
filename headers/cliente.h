#ifndef CLIENTE_H
#define CLIENTE_H

#include <QString>

class Cliente {
private:
    QString dni;
    QString nombre;
    QString telefono;
    QString direccion;

public:
    Cliente(QString dni, QString nombre, QString telefono, QString direccion);
    void mostrar() const;
};

#endif
