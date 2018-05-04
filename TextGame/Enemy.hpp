//
//  Enemy.hpp
//  TextGame
//
//  Created by Ezekiel Williams on 4/28/18.
//  Copyright © 2018 Ezekiel Williams. All rights reserved.
//

#ifndef Enemy_hpp
#define Enemy_hpp
#pragma once

#include <memory>
#include <string>

enum class EnemyTypes {
    XRat = 0,
    Swamper,
    Diggola,
    Reauve,
    Spitfire
};


class Enemy {
protected:
    std::string name;
    unsigned int level;
    unsigned int health;
    unsigned int maxHealth;
    unsigned int baseAttack;
    unsigned int baseDefense;
    
public:
    virtual void showStats() const = 0;
    
public:
    Enemy(unsigned int level, std::string name);
    virtual ~Enemy();
    
};


#endif /* Enemy_hpp */
