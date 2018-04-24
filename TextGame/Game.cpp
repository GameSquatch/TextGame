//
//  Game.cpp
//  TextGame
//
//  Created by Ezekiel Williams on 5/23/17.
//  Copyright © 2017 Ezekiel Williams. All rights reserved.
//

#include "Game.hpp"

Game::Game()
: gameState(Game::EGameState::LOST)
, farm("Farm")
, hills("Hills")
, river("River")
, mountain("Mountain")
, moveToNextOption(Locations::MovingDirections::Next, "next")
, moveToPrevOption(Locations::MovingDirections::Previous, "previous")
{
    player.initialize();
    initializeMap();
}

Game::~Game() {
    
}

void Game::initializeMap() {
    //start of map at farm
    farm.addNextLocation(&hills);
    //FOR FUTURE REFERENCE
    //MOVE OPTIONS SHOULD BE STATIC OPTIONS, NOT DYNAMIC.
    farm.addDynamicOption(&moveToNextOption);
    
    //next location is hills
    hills.addPrevLocation(&farm);
    hills.addNextLocation(&river);
    hills.addDynamicOption(&moveToPrevOption);
    hills.addDynamicOption(&moveToNextOption);

    
    //next location is river
    river.addPrevLocation(&hills);
    river.addNextLocation(&mountain);
    river.addDynamicOption(&moveToPrevOption);
    river.addDynamicOption(&moveToNextOption);

    
    //final location is mountain
    mountain.addPrevLocation(&river);
    mountain.addDynamicOption(&moveToPrevOption);

    
    //give player a location to start in
    player.setLocation(&farm);
}

void Game::showPlayerStart() {
    player.showStats();
}

void Game::runGame() {
    unsigned short int choice = 0;
    int count = 0;
    while (gameState != Game::EGameState::WON) {
        //show options
        showOptions();
        inputMenuChoice(choice);
        //std::cout << "\nYou chose " << choice << "!\n" << std::endl;
        if (choice == 0) break;
        evaluateChoice(choice);
        
        showPlayerStatus();
        
        //check game state
    }
    
}

void Game::showOptions() {
    player.getCurrentLocation()->showOptions();
}

void Game::inputMenuChoice(unsigned short int& choice) {
    std::cout << "What's next?(choose a number 0 to quit)\n>> ";
    std::string input = "";
    std::stringstream ss;
    bool failFlag;
    
    do {
        failFlag = false;
        getline(std::cin, input);
        
        ss.str(input);
        std::cout << ss.str() << std::endl;
        if (input == "" || !(ss >> choice)) {
            std::cout << "\n****Please enter a number****" << std::endl << ">> ";
            failFlag = true;
            ss.clear();
        } else {
            ss >> choice;
        }
        
    } while (failFlag);
}

void Game::evaluateChoice(unsigned short int choice) {
    Option* chosenOption = player.getCurrentLocation()->getOption(choice - 1);
    
    if (chosenOption != nullptr) {
        chosenOption->Evaluate(player);
    }
}

void Game::showPlayerStatus() const {
    //show vital things like location
    std::cout << "-------Vital Info------" << std::endl;
    
    
    
    std::cout << 
    
}
