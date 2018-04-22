//
//  FightEnemiesOption.cpp
//  TextGame
//
//  Created by Ezekiel Williams on 4/20/18.
//  Copyright © 2018 Ezekiel Williams. All rights reserved.
//

#include "FightEnemiesOption.hpp"

FightEnemiesOption::FightEnemiesOption(std::string outputText)
: Option("Fight Enemies", PlayerOptions::FIGHT_ENEMIES)
{
    
}

void FightEnemiesOption::Evaluate(Player& player) {
    Locations* currentLocation = player.getCurrentLocation();
}
