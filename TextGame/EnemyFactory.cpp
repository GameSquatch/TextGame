//
//  EnemyFactory.cpp
//  TextGame
//
//  Created by Ezekiel Williams on 5/3/18.
//  Copyright © 2018 Ezekiel Williams. All rights reserved.
//

#include "EnemyFactory.hpp"


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
