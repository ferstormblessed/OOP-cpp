#include <iostream>
#include <fstream>
#include <sstream>
#include "ProductoAlmacen.h"
#include "ProductoAlmacen.cpp"
#include "Almacen.h"
#include "Almacen.cpp"
#include "ProductoCarrito.h"
#include "ProductoCarrito.cpp"
#include "Carrito.h"
#include "Carrito.cpp"
#include <string>

using namespace std;

int main(){
    string cliente;
    cout << "¡¡¡¡¡¡HOLA!!!!!!" << endl << "Bienvenido a mi tienda" << endl << "¿Cuál es tu nombre? ";
    cin >> cliente;

    Almacen almacen("productos.txt");
    Carrito carrito(0,cliente);

    int opcion = 0;

    while (opcion != 6){
        cout << endl << endl << "MENÚ" << endl << endl;
        cout << "1) Ver productos" << endl << "2) Comprar" << endl << "3) Ver carrito" << endl << "4) Editar" << endl << "5) Pagar" << endl << "6) Salir" << endl << endl;
        cout << "Escribe el número de la opción que desee: ";
        cin >> opcion;

        if (opcion == 1){
            cout << endl << "Productos" << endl << endl;
                for (int i = 0; i < almacen.getSizeAl(); i++){
                    almacen.getProdAl(i).printProduct();
                }
            cout << endl;
        }
        else if (opcion == 2){
            cout << endl << "Comprar" << endl << endl;
            string n_id,
                    n_nombre;
            double n_precio;
            int n_cantidad,
                posicion = 0,
                n_existencia = 0,
                correcto = 0;
            do{
                if(carrito.getSizeCar() == 10){
                    cout << "Tu carrito esta lleno. No puedes agregar más artículos" << endl;
                }
                else{
                    cout << endl << "Introduce los datos correspondientes del artículo que desee" << endl;
                    cout << "ID: ";
                    cin >> n_id;
                    cout << "Cantidad: ";
                    cin >> n_cantidad;

                    for (int i = 0; i < almacen.getSizeAl(); i++){
                        if (n_id == almacen.getProdAl(i).getID()){
                            while(n_cantidad > almacen.getProdAl(i).getExistencia()){
                                cout << endl << "No hay suficientes elementos en el almacen de ese producto. Porfavor introduzca otra cantidad." << endl << "Cantidad: ";
                                cin >> n_cantidad;
                            }
                            posicion = i;
                        }
                    }
                    cout << endl << n_id << "," << n_cantidad << endl << "¿Los datos son correctos? SI (1), NO(2): ";
                    cin >> correcto;
                }
            }    
            while (correcto != 1);
            n_nombre = almacen.getProdAl(posicion).getNombre();
            n_precio = almacen.getProdAl(posicion).getPrecio();
            ProductoCarrito pCarrito(n_id, n_nombre, n_precio, n_cantidad);
            carrito.setProdCar(carrito.getSizeCar(), pCarrito);
            carrito.setSizeCar(carrito.getSizeCar() + 1);
        }
        else if (opcion == 3){
            cout << endl << "Carrito de compras de " << carrito.getCliente() << endl << endl;
            if (carrito.getSizeCar() == 0){
                cout << "El carrito está vacío" << endl;
            }
            else{
                for (int i = 0; i < carrito.getSizeCar(); i++){
                    carrito.getProdCar(i).printProduct();
                }
                cout << endl << "El total de los artículos del carrito es $" << carrito.total() << endl;
            }
        }
        else if (opcion == 4){
            cout << endl << "Editar" << endl << endl;
            string n_id;
            int correcto = 0,
                posicion = 0, 
                _cantidad;
            do{
                cout << "Escriba el id del producto que desea modificar" << endl << "ID: ";
                cin >> n_id;
                cout << "Escribe la cantidad a la que deseas cambiar. Si quieres eliminar el producto escribe 0." << endl << "Cantidad: ";
                cin >> _cantidad;
                for (int i = 0; i < carrito.getSizeCar(); i++){
                    for (int j = 0; j < almacen.getSizeAl(); j++){
                        if (n_id == carrito.getProdCar(i).getID() && n_id == almacen.getProdAl(j).getID()){
                            while(_cantidad > almacen.getProdAl(j).getExistencia()){
                            cout << endl << "No hay suficientes elementos en el almacen de ese producto. Porfavor introduzca otra cantidad." << endl << "Cantidad: ";
                            cin >> _cantidad;
                            }
                            posicion = i;  
                        }
                    }
                }
                cout << endl << n_id << "," << _cantidad << endl << "¿Los datos son correctos? SI (1), NO(2): ";
                cin >> correcto;
            }
            while (correcto != 1);
            if (_cantidad == 0){
                for(int i = posicion; i < carrito.getSizeCar(); i++){
                    ProductoCarrito producto_n1 = carrito.getProdCar(i + 1);
                    carrito.setProdCar(i, producto_n1);
                }
                carrito.setSizeCar(carrito.getSizeCar() - 1);
            }
            else{
                carrito.getProdCar(posicion).setCantidad(_cantidad);
            }
        }
        else if (opcion == 5){
            cout << endl << "Pagar" << endl << endl;
            cout << "El total de su cuenta fue de $" << carrito.total() << endl << endl << "Gracias por su compra." << endl << endl << "¡¡¡Vuelva pronto!!!" << endl;
            carrito.setSizeCar(0);
        }
        else if (opcion == 6){
            cout << endl << "SALIR" << endl << endl;
            break;
        }
        else{
            cout << "Opción invalida. Intentenlo de nuevo" << endl;
        }
    }
    return 0;
}