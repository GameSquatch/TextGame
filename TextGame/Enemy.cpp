//
//  Enemy.cpp
//  TextGame
//
//  Created by Ezekiel Williams on 4/28/18.
//  Copyright © 2018 Ezekiel Williams. All rights reserved.
//

#include "Enemy.hpp"

Enemy::Enemy(unsigned int level, std::string name)
: level(level), name(name)
{
    health = 1;
    maxHealth = 1;
    baseAttack = 1;
    baseDefense = 1;
}

Enemy::~Enemy() {
    
}

//*********FACTORTY***********//

std::unique_ptr<Enemy> EnemyFactory::createEnemy(EnemyTypes type) {
    //std::unique_ptr<Enemy> ptr;
    
    switch(type) {
        case EnemyTypes::XRat:
            return std::unique_ptr<Enemy>(new XRat(1));
            break;
        default:
            return std::unique_ptr<Enemy>();
    }
    
}
