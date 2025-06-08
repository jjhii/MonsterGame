// Monster.h
#pragma once

#include "Character.h"

class Monster : public Character {
public:
    Monster(std::string name, int health, int attackPower);

    // Monster-specific implementation of attack
    void attack(Combatant& target) override;
};
