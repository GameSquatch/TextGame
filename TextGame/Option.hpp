//
//  Option.hpp
//  TextGame
//
//  Created by Ezekiel Williams on 3/6/18.
//  Copyright © 2018 Ezekiel Williams. All rights reserved.
//

#ifndef Option_hpp
#define Option_hpp
#pragma once

#include "Player.hpp"
#include "PlayerOptions.hpp"

#include <iostream>
#include <string>

class Player;

class Option {
protected:
    std::string outputText;
    PlayerOptions chosenOption;
    
public:
    virtual void Evaluate(Player& player) = 0;
    std::string getOutputText() const;
    PlayerOptions getChosenOption() const;
    
public:
    Option(std::string outputText, PlayerOptions chosenOption);
    
};


#endif /* Option_hpp */
