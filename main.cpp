#include <iostream>
#include <string>

int id[8]     = {101,102,103,104,105,106,107,108};
std::string nombre[8] = {
    "Martillo de bola", "Destornillador", "Cinta metrica",
    "Tornillo", "Tenazas", "Lija", "Tuerca", "Taquetes"
};
int stock[8]  = {50,120,75,45,10,30,25,60};
float precio[8] = {15.00,8.75,20.00,25.99,100.00,1350.00,200.00,50.00};

// --- Funciones ---
int buscarProducto(int codigo) {
    for (int i = 0; i < 10; i++) {
        if (id[i] == codigo) {
            return i;
        }
    }
    return -1; // no encontrado
}

void consultarProducto() {
    int codigo;
    std::cout << "Ingrese el codigo del producto: ";
    std::cin >> codigo;

    int pos = buscarProducto(codigo);
    if (pos == -1) {
        std::cout << "El producto no existe.\n";
    } else {
        std::cout << "\nCodigo: " << id[pos]
                  << "\nNombre: " << nombre[pos]
                  << "\nStock: " << stock[pos]
                  << "\nPrecio: $" << precio[pos] << std::endl;
    }
}

void actualizarInventario() {
    int codigo;
    std::cout << "Ingrese el codigo del producto a actualizar: ";
    std::cin >> codigo;

    int pos = buscarProducto(codigo);
    if (pos == -1) {
        std::cout << "El producto no existe.\n";
        return;
    }

    std::cout << "Nuevo stock: ";
    std::cin >> stock[pos];
    std::cout << "Nuevo precio: ";
    std::cin >> precio[pos];
    std::cout << "Producto actualizado correctamente.\n";
}

void generarReporte() {
    std::cout << "\n--- Reporte de inventario ---\n";
    std::cout << "Codigo | Nombre                 | Stock | Precio\n";
    std::cout << "------------------------------------------------\n";
    for (int i = 0; i < 10; i++) {
        std::cout << id[i] << " | " << nombre[i]
                  << " | " << stock[i]
                  << " | $" << precio[i] << std::endl;
    }
}

void productoMasCaro() {
    int pos = 0;
    for (int i = 1; i < 10; i++) {
        if (precio[i] > precio[pos]) {
            pos = i;
        }
    }
    std::cout << "El producto mas caro es: " << nombre[pos]
              << " con un precio de $" << precio[pos] << std::endl;
}

// --- Menuu---
int main() {
    int opcion;
    do {
        std::cout << "\n--- Bienvenido a la ferreteria 'El martillo' ---\n";
        std::cout << "1. Consultar producto\n";
        std::cout << "2. Actualizar inventario\n";
        std::cout << "3. Generar reporte completo\n";
        std::cout << "4. Producto mas caro\n";
        std::cout << "5. Salir\n";
        std::cout << "Elige una opcion: ";
        std::cin >> opcion;

        switch(opcion) {
            case 1: consultarProducto(); break;
            case 2: actualizarInventario(); break;
            case 3: generarReporte(); break;
            case 4: productoMasCaro(); break;
            case 5: std::cout << "Nos vemos...!!\n"; break;
            default: std::cout << "Opcion invalida.\n";
        }
    } while (opcion != 5);

    return 0;
}
