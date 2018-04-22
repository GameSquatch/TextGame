//
//  Locations.hpp
//  TextGame
//
//  Created by Ezekiel Williams on 5/23/17.
//  Copyright © 2017 Ezekiel Williams. All rights reserved.
//

#ifndef Locations_hpp
#define Locations_hpp
#pragma once

#include "Option.hpp"

#include <string>
#include <map>
#include <vector>
#include <iostream>

class Option;

class Locations {
public:
    enum MovingDirections {
        Next,
        Previous
    };
    
private:
    //array of options
    std::vector<Option*> dynamicOptions;
    //unsigned int staticOptionsStartIndex;
    
    //name of location
    std::string title;
    //pointer to prev location
    Locations* prev;
    //pointer to next location
    Locations* next;
    
public://member functions
    void addNextLocation(Locations* next);
    void addPrevLocation(Locations* prev);
    void addDynamicOption(Option* option);
    void showOptions() const;
    Locations* getLocation(MovingDirections direction);
    Option* getOption(unsigned short int index);
    
    std::string getTitle();
    
public:
    Locations(std::string title);
    
};

#endif /* Locations_hpp */
