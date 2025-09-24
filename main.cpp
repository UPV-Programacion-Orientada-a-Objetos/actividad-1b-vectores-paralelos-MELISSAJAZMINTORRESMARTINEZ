#include <iostream>
#include <string>

using namespace std;

    int codigos[10] = {101,102,103,104,105, 106, 107, 108, 109, 110};
    string nombres[] = {"Martillo de bola", "Destornillador", "Cinta metrica", "Llave imglesa", "Taladro inalambrico", "Tornillo", "Tenazas", "Lija", "Tuerca", "TAquetes"};
    int stock[] = {50, 120, 75,45, 10, 30, 25, 60, 15, 40};
    float precio [] ={15,50, 8.75, 20.00, 25.99, 120.00, 10.50, 60.38, 5.75, 22.80, 18.40};



int main() {

    cout<<"Hola, bienvenido a la ferreteria 'El martillo'"<<endl;

    while(true){
        cout<<"Seleccione una opcion:"<<endl;

        cout<<"1.- Consultar productos"<<endl;
        cout<<"2.- Actualizar inventario"<<endl;
        cout<<"3.- Generar reporte completo"<<endl;
        cout<<"4.- Encontrar el producto mas caro"<<endl;
        cout<<"5.- Salir"<<endl;
        int opcion;
        cin>>opcion;

        switch(opcion){
            case 1:

            break;
            case 2:

            break;
            case 3:

            break;
            case 4:

            break;
            case 5:
            cout<<"Saliendo del Sistemas, hasta prontoo!"<<endl;
            return 0;
            break;
            default:
            cout<<"Opcion no valida, intente de nuevo"<<endl;
            break;
        }
    }
    return 0;
}