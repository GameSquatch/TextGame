//
//  Player.hpp
//  TextGame
//
//  Created by Ezekiel Williams on 5/23/17.
//  Copyright © 2017 Ezekiel Williams. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp
#pragma once

#include "Locations.hpp"

#include <string>
#include <iostream>

class Locations;

class Player {
private:
    std::string name;
    //stats
    unsigned int level;
    unsigned int health;
    unsigned int maxHealth;
    unsigned int baseAttack;
    unsigned int baseDefense;
    //experience
    unsigned int experience;
    unsigned int expToLvlUp;
    
    Locations* currentLocation;

private:
    void enterName();
    
public:
    void initialize();
    void setLocation(Locations* location);
    Locations* getCurrentLocation() const;
    void showVitalInfo() const;
    
    void showStats() const;
    
public:
    Player();
    
};


#endif /* Player_hpp */
