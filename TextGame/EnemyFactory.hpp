//
//  EnemyFactory.hpp
//  TextGame
//
//  Created by Ezekiel Williams on 5/3/18.
//  Copyright © 2018 Ezekiel Williams. All rights reserved.
//

#ifndef EnemyFactory_hpp
#define EnemyFactory_hpp
#pragma once

#include "XRat.hpp"


class EnemyFactory {
public:
    static std::unique_ptr<Enemy> createEnemy(EnemyTypes);
};


#endif /* EnemyFactory_hpp */
