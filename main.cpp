#include <iostream>
#include <string>

using namespace std;

    int id[10] = {101,102,103,104,105, 106, 107, 108, 109, 110};
    string nombre[10] = {"Martillo de bola", "Destornillador", "Cinta metrica", "Llave imglesa", "Taladro inalambrico", "Tornillo", "Tenazas", "Lija", "Tuerca", "TAquetes"};
    int stock[10] = {50, 120, 75,45, 10, 30, 25, 60, 15, 40};
    float precio[10] = {15.00,8.75,20.00,25.99,100.00,1350.00,200.00,50.00,5.00,18.00};

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
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;

    int pos = buscarProducto(codigo);
    if (pos == -1) {
        cout << "El producto no existe.\n";
    } else {
        cout << "\nCodigo: " << id[pos]
             << "\nNombre: " << nombre[pos]
             << "\nStock: " << stock[pos]
             << "\nPrecio: $" << precio[pos] << endl;
    }
}
// --- Programa principal ---
int main() {
    int opcion;
    do {
        cout << "\n---Bienvenido a la ferrteria el 'El marillo'---\n";
        cout << "1. Consultar producto\n";
        cout << "2. Actualizar inventario\n";
        cout << "3. Generar reporte completo\n";
        cout << "4. Producto mas caro\n";
        cout << "5. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: consultarProducto(); break;
            case 2:  break;
            case 3: break;
            case 4: break;
            case 5: cout << "Nos vemooos!\n"; break;
            default: cout << "Opcion invalida.\n";
        }
    } while (opcion != 5);

    return 0;
}
