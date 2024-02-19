//
// Created by cors90 on 18/02/2024.
//

#ifndef TAREA2SMARTPOINTERS_CHARACTER_H
#define TAREA2SMARTPOINTERS_CHARACTER_H
#include <string>

using namespace std;

class Character {
protected:
    string name;
    int health;
    int attack;
    int defense;
    int speed;
public:
    string testMethod();
    Character(string _name, int _health, int _attack, int _defense, int _speed);
    //No entendí esto, solo se que es necesario para poder usar el cout con mi objeto sin especificar que propiedades imprimir
    // Friend function that overloads the << operator.
    friend std::ostream& operator<<(std::ostream& os, const Character& obj);
};

#endif //TAREA2SMARTPOINTERS_CHARACTER_H
