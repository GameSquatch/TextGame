//
//  Player.cpp
//  TextGame
//
//  Created by Ezekiel Williams on 5/23/17.
//  Copyright © 2017 Ezekiel Williams. All rights reserved.
//

#include "Player.hpp"


void Player::setLocation(Locations* location) { this->currentLocation = location; }
Locations* Player::getCurrentLocation() const { return this->currentLocation; }

Player::Player()
{
    enterName();
    initialize();
}

void Player::initialize() {
    
    currentLocation = nullptr;
    maxHealth = 1;
    health = maxHealth;
    baseAttack = 0;
    baseDefense = 0;
    level = 0;
    experience = 0;
    expToLvlUp = 1;
    
}

void Player::enterName() {
    std::string input = "";
    bool confirmed = false;
    
    do {
        
        std::cout << "Enter your name\n>> ";
        getline(std::cin, input);
        
        if (input.length() == 0) {
            
            std::cout << ">> ";
            
        } else {
            
            std::string confirm = "";
            do {
                
                std::cout << "Is '" << input << "' correct?(y/n): ";
                getline(std::cin, confirm);
                
                if (confirm == "y" || confirm == "Y") {
                    confirmed = true;
                    break;
                } else if (confirm.length() == 0) {
                    std::cout << "Enter 'y' or 'n'.\n";
                }
                
            } while (confirm.length() == 0);
            
        }
        
    } while (!confirmed);
    
    name = input;
}

void Player::showStats() const {
    std::cout << "\n__STATS_________\n";
    std::cout << name << std::endl;
    std::cout << "\nLevel: " << level << std::endl;
    std::cout << "Experience: " << experience << std::endl;
    std::cout << "Exp. to next level: " << expToLvlUp << std::endl;
    std::cout << "\nHealth: " << health << std::endl;
    std::cout << "Max Health: " << maxHealth << std::endl;
    std::cout << "Base Attack: " << baseAttack << std::endl;
    std::cout << "Base Defense: " << baseDefense << std::endl;
    std::cout << "Current Location: " << currentLocation->getTitle() << std::endl << std::endl;
}

void Player::showVitalInfo() const {
    
    std::cout << "Level: " << level << std::endl;
    std::cout << "XP to Level Up: " << expToLvlUp << std::endl;
    
    std::cout << "Location: " <<  currentLocation->getTitle() << std::endl;
    
}
