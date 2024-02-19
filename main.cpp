#include <iostream>
//No se si entendí muy bien el constructor de la clase SmartPointer
#include "SmartPointer.h"

using namespace std;

int main() {
    //creando un smart pointer dentro del ambito de un for, que será liberado al acabar el ciclo
    for (SmartPtr<int> ptr(new int(0)); *ptr < 5; (*ptr)++) {
        cout << *ptr<<" direccion: "<<&ptr<<endl;
    }
    for (SmartPtr<int> ptr(new int(5)); *ptr > 0; (*ptr)--) {
        cout << *ptr<<" direccion: "<<&ptr<<endl;
    }
    return 0;
}
