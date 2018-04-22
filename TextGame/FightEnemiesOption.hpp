//
//  FightEnemiesOption.hpp
//  TextGame
//
//  Created by Ezekiel Williams on 4/20/18.
//  Copyright © 2018 Ezekiel Williams. All rights reserved.
//

#ifndef FightEnemiesOption_hpp
#define FightEnemiesOption_hpp
#pragma once

#include "Option.hpp"
#include "Player.hpp"

class FightEnemiesOption: public Option {
private:
    
public:
    virtual void Evaluate(Player& player);
    
public:
    //I need to make an enemies list for locations to input into constructor
    FightEnemiesOption(std::string outputText);
};

#endif /* FightEnemiesOption_hpp */
