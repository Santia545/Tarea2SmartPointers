#include <iostream>
//No se si entendí muy bien el constructor de la clase SmartPointer
#include "SmartPointer.h"
#include "Character.h"

void printSomeStuff();

using namespace std;

int main() {
    //creando un smart pointer dentro del ambito de un for, que será liberado al acabar el ciclo
    //La direccion del puntero real es la misma incluso cuando se elimina el puntero en todas las declaraciones????
    for (SmartPtr<int> ptr(new int(0)); *ptr < 5; (*ptr)++) {
        cout << *ptr << " direccion del objeto que guarda el puntero: " << &ptr << " direccion del puntero real: "
             << ptr.operator->() << endl;
    }
    for (SmartPtr<int> ptr(new int(5)); *ptr > 0; (*ptr)--) {
        cout << *ptr << " direccion del objeto que guarda el puntero: " << &ptr << " direccion del puntero real: "
             << ptr.operator->() << endl;
    }
    printSomeStuff();
    //Creando un smartpointer dentro del ambito de la funcion main, que se destruira al salir de esta
    SmartPtr<Character> ptr(new Character("Cesar", 100, 20, 10, 20));
    cout << "Imprimiendo las caracteristicas del caracter" << endl << *ptr << endl
         << "direccion del objeto que guarda el puntero: " << &ptr << " direccion del puntero real: "
         << ptr.operator->() << endl;
    cout << ptr->testMethod() << endl;
    return 0;
}

void printSomeStuff() {
    //Creando un smart pointer dentro del ambito de una funcion
    SmartPtr<string> ptr(new string);
    *ptr = "Hola";
    cout << "Mensaje: " << *ptr << ". direccion del objeto que guarda el puntero: " << &ptr
         << " direccion del puntero real: "
         << ptr.operator->() << endl;
}
