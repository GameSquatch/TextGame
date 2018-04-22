//
//  ChangeLocationOption.hpp
//  TextGame
//
//  Created by Ezekiel Williams on 3/6/18.
//  Copyright © 2018 Ezekiel Williams. All rights reserved.
//

#ifndef ChangeLocationOption_hpp
#define ChangeLocationOption_hpp
#pragma once

#include "Option.hpp"
#include "Player.hpp"
#include "Locations.hpp"

#include <iostream>

class ChangeLocationOption: public Option {
private:
    Locations::MovingDirections directionMoving;
    
public:
    virtual void Evaluate(Player& player);
    
public:
    ChangeLocationOption(Locations::MovingDirections directionMoving, std::string outputText);
};


#endif /* ChangeLocationOption_hpp */
