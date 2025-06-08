// main.cpp
#include <iostream>
#include "Player.h"
#include "Monster.h"

// Helper function to display stats
void displayStats(const Character& player, const Character& monster) {
    std::cout << "--- Player: " << player.getName() << " | Health: " << player.getHealth() << " ---" << std::endl;
    std::cout << "--- Monster: " << monster.getName() << " | Health: " << monster.getHealth() << " ---" << std::endl;
    std::cout << std::endl;
}

int main() {
    // 1. Initialization: Create the objects
    Player player("Hero", 100, 20);
    Monster monster("Goblin", 50, 10);

    std::cout << "A wild " << monster.getName() << " appears!" << std::endl;
    std::cout << "Let the battle begin!" << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    // 2. Flow Control (Game Loop)
    // The loop continues as long as both characters are alive.
    while (player.isAlive() && monster.isAlive()) {
        displayStats(player, monster);

        // Player's turn
        std::cout << "Player's turn. Press 'a' to attack: ";
        char choice;
        std::cin >> choice;

        // 3. Flow Control (Conditional)
        if (choice == 'a') {
            player.attack(monster);
        } else {
            std::cout << "Invalid choice. You hesitate and do nothing." << std::endl;
        }

        std::cout << "------------------------------------------" << std::endl;

        // Check if the monster is defeated
        if (monster.isAlive()) {
            // Monster's turn
            monster.attack(player);
            std::cout << "------------------------------------------" << std::endl;
        }
    }

    // 4. Game Over Logic
    if (player.isAlive()) {
        std::cout << "Congratulations! You have defeated the " << monster.getName() << "!" << std::endl;
    } else {
        std::cout << "You have been defeated by the " << monster.getName() << ". Game Over." << std::endl;
    }

    return 0;
}
