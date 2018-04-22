//
//  Option.cpp
//  TextGame
//
//  Created by Ezekiel Williams on 3/6/18.
//  Copyright © 2018 Ezekiel Williams. All rights reserved.
//

#include "Option.hpp"

//getters
std::string Option::getOutputText() const { return this->outputText; }
PlayerOptions Option::getChosenOption() const { return this->chosenOption; }

//constructor
Option::Option(std::string outputText, PlayerOptions chosenOption)
: outputText(outputText)
, chosenOption(chosenOption)
{
    
}
