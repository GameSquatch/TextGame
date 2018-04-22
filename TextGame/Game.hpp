//
//  Game.hpp
//  TextGame
//
//  Created by Ezekiel Williams on 5/23/17.
//  Copyright © 2017 Ezekiel Williams. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#pragma once

#include <vector>
#include <sstream>
#include "Player.hpp"
#include "Locations.hpp"
#include "ChangeLocationOption.hpp"
#include "Option.hpp"


class Game {
public://enums
    enum EGameState {
        WON,
        LOST
    };
    
private://variables
    EGameState gameState;
    
    Player player;
    //map locations
    Locations farm;
    Locations hills;
    Locations river;
    Locations mountain;
    //options
    ChangeLocationOption moveToNextOption;
    ChangeLocationOption moveToPrevOption;
    
public://member functions
    void initializeMap();
    void showPlayerStart();
    void runGame();
    void showOptions();
    void inputMenuChoice(unsigned short int& choice);
    void evaluateChoice(unsigned short int choice);
    
public://constructor/destructor
    Game();
    virtual ~Game();
    
};

#endif /* Game_hpp */
