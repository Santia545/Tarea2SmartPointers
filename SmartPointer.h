//
// Created by cors90 on 18/02/2024.
//

#ifndef TAREA2SMARTPOINTERS_SMARTPOINTER_H
#define TAREA2SMARTPOINTERS_SMARTPOINTER_H

#include <iostream>

using namespace std;

// Una clase para usar smart pointers genericos
template<class T>
class SmartPtr {
    T *ptr; // Puntero real de Tipo T
public:
    //Esto no lo entendí muy bien pero segun yo:
    // Constructor con la palabra clave explicita para que no se le puedan asignar conversiones de forma implicita a objetos de la clase, solo se podrá iniciar con el constructor
    explicit SmartPtr(T *p = NULL) { ptr = p; }

    // Destructor, aqui se borra el puntero automaticamente cuando la variable sale de ambito
    ~SmartPtr() {
        cout << "deleting pointer" << endl;
        delete (ptr);
    }

    // Sobrecargadel operador de dereferencia * para poder acceder al valor del puntero
    T &operator*() { return *ptr; }

    // Sobrecarga del operador de flecha para poder acceder a los miembros de T como un puntero normal
    T *operator->() { return ptr; }
};

#endif //TAREA2SMARTPOINTERS_SMARTPOINTER_H
