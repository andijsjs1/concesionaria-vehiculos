#include "../headers/Menu.h"
#include <iostream>

void Menu::ejecutar() {
    int opcion;
    std::string input;

    do {
        std::cout << "\n--- Menu de Concesionaria ---\n";
        std::cout << "1. Registrar Vehiculo\n";
        std::cout << "2. Registrar Cliente\n";
        std::cout << "3. Consultar registros\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;
        std::cin.ignore(); // Limpia el salto de línea pendiente

        if (opcion == 1) {
            QString cod, marca, modelo;
            int anio;
            float km, precio;

            std::cout << "Codigo: ";
            std::getline(std::cin, input);
            cod = QString::fromStdString(input);

            std::cout << "Marca: ";
            std::getline(std::cin, input);
            marca = QString::fromStdString(input);

            std::cout << "Modelo: ";
            std::getline(std::cin, input);
            modelo = QString::fromStdString(input);

            std::cout << "Anio: ";
            std::cin >> anio;

            std::cout << "Kilometraje: ";
            std::cin >> km;

            std::cout << "Precio: ";
            std::cin >> precio;
            std::cin.ignore(); // Limpia el salto de línea

            controller.registrarVehiculo(cod, marca, modelo, anio, km, precio);

        } else if (opcion == 2) {
            QString dni, nombre, telefono, direccion;

            std::cout << "DNI: ";
            std::getline(std::cin, input);
            dni = QString::fromStdString(input);

            std::cout << "Nombre: ";
            std::getline(std::cin, input);
            nombre = QString::fromStdString(input);

            std::cout << "Telefono: ";
            std::getline(std::cin, input);
            telefono = QString::fromStdString(input);

            std::cout << "Direccion: ";
            std::getline(std::cin, input);
            direccion = QString::fromStdString(input);

            controller.registrarCliente(dni, nombre, telefono, direccion);

        } else if (opcion == 3) {
            controller.consultarVehiculos();
            controller.consultarClientes();
        }

    } while (opcion != 4);

    std::cout << "Programa finalizado.\n";
}
