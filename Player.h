// Player.h
#pragma once

#include "Character.h"

class Player : public Character {
public:
    Player(std::string name, int health, int attackPower);

    // Player-specific implementation of attack
    void attack(Combatant& target) override;
};
