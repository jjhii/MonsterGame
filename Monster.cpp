// Monster.cpp
#include "Monster.h"
#include <iostream>

Monster::Monster(std::string name, int health, int attackPower) 
    : Character(name, health, attackPower) {}

void Monster::attack(Combatant& target) {
    std::cout << name << " viciously claws at its foe!" << std::endl;
    target.takeDamage(attackPower);
}
