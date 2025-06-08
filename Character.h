// Character.h
#pragma once

#include "Combatant.h"
#include <string>

// Base class for all characters. It implements the Combatant interface.
class Character : public Combatant {
protected:
    std::string name;
    int health;
    int attackPower;

public:
    Character(std::string name, int health, int attackPower);

    // Implementing the pure virtual functions from Combatant
    void takeDamage(int damage) override;
    bool isAlive() const override;

    // Helper functions
    std::string getName() const;
    int getHealth() const;
};
