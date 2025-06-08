// Player.cpp
#include "Player.h"
#include <iostream>

Player::Player(std::string name, int health, int attackPower) 
    : Character(name, health, attackPower) {}

void Player::attack(Combatant& target) {
    std::cout << name << " bravely swings their sword!" << std::endl;
    target.takeDamage(attackPower);
}
