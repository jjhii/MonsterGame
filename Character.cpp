// Character.cpp
#include "Character.h"
#include <iostream>

Character::Character(std::string name, int health, int attackPower)
    : name(name), health(health), attackPower(attackPower) {}

void Character::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
    std::cout << name << " takes " << damage << " damage! Remaining health: " << health << std::endl;
}

bool Character::isAlive() const {
    return health > 0;
}

std::string Character::getName() const {
    return name;
}

int Character::getHealth() const {
    return health;
}
