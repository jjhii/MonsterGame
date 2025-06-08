// Combatant.h
#pragma once

// An "interface" that defines the contract for any character that can fight.
class Combatant {
public:
    // A pure virtual function makes this class abstract.
    // It takes a reference to another Combatant as the target.
    virtual void attack(Combatant& target) = 0;
    
    virtual void takeDamage(int damage) = 0;
    virtual bool isAlive() const = 0;

    // Virtual destructor is important for base classes.
    virtual ~Combatant() {} 
};
