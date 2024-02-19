//
// Created by Victor Navarro on 15/02/24.
//

#include "Character.h"
Character::Character(string _name, int _health, int _attack, int _defense, int _speed) {
    name = _name;
    health = _health;
    attack = _attack;
    defense = _defense;
    speed = _speed;
}



std::ostream& operator<<(std::ostream& os, const Character& obj) {
    os << "Name: " + obj.name + "\nHealth: " + to_string(obj.health) + "\nAttack: " + to_string(obj.attack) + "\nDefense: " + to_string(obj.defense) + "\nSpeed: " + to_string(obj.speed);
    return os;
}

string Character::testMethod() {
    return "test";
}
