//
//  ChangeLocationOption.cpp
//  TextGame
//
//  Created by Ezekiel Williams on 3/6/18.
//  Copyright © 2018 Ezekiel Williams. All rights reserved.
//

#include "ChangeLocationOption.hpp"


ChangeLocationOption::ChangeLocationOption(Locations::MovingDirections directionMoving, std::string outputText)
: Option(outputText, PlayerOptions::CHANGE_LOCATION)
, directionMoving(directionMoving)
{
    
}

void ChangeLocationOption::Evaluate(Player& player) {
    Locations* current = player.getCurrentLocation();
    
    Locations* moveTo = current->getLocation(directionMoving);
    
    if (moveTo) {
        player.setLocation(moveTo);
        std::cout << "You moved to the " << player.getCurrentLocation()->getTitle() << std::endl;
    } else {
        std::cout << "You can't move to " << getOutputText() << " location." << std::endl;
    }
}
