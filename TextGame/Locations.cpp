//
//  Locations.cpp
//  TextGame
//
//  Created by Ezekiel Williams on 5/23/17.
//  Copyright © 2017 Ezekiel Williams. All rights reserved.
//

#include "Locations.hpp"

Locations::Locations(std::string title) {
    prev = nullptr;
    next = nullptr;
    this->title = title;
    staticOptionsStartKey = 1;
    
}

void Locations::addNextLocation(Locations* next) {
    //if it doesn't have next assigned yet, assign it
    if (this->next == nullptr) {
        this->next = next;
    }
}

void Locations::addPrevLocation(Locations* prev) {
    //if it doesn't have previous assigned yet, assign it
    if (this->prev == nullptr) {
        this->prev = prev;
    }
}

void Locations::addDynamicOption(Option* option) {
    if (option != nullptr) {
        dynamicOptions.push_back(option);
    } else {
        std::cout << "\nTRIED TO ADD DYNAMIC OPTION NULLPTR" << std::endl;
    }
}

void Locations::addStaticOption(Option* option) {
    if (option != nullptr) {
        staticOptions[staticOptionsStartKey++] = option;
    } else {
        std::cout << "\nTRIED TO ADD STATIC OPTION NULLPTR" << std::endl;
    }
}

void Locations::showOptions() const {
    std::cout << "\nOptions\n";
    unsigned short int i;
    std::map<unsigned short int, Option*>::const_iterator staticIter;
    
    if (staticOptions.size() > 0) {
        for (staticIter = staticOptions.cbegin(); staticIter != staticOptions.cend(); staticIter++) {
            Option* option = staticIter->second;
            std::cout << staticIter->first << ". " << option->getOutputText() << std::endl;
            //std::cout << staticIter->first << std::endl;
        }
    }
    
    for (i = 0; i < dynamicOptions.size(); ++i) {
        unsigned short int num = i + staticOptions.size() + 1;
        std::cout << num << ". " << dynamicOptions[i]->getOutputText() << std::endl;
    }
    
    std::cout << std::endl;
}

std::string Locations::getTitle() {
    return this->title;
}

Locations* Locations::getLocation(MovingDirections direction) {
    //this gets the linked location of desired direction from current
    if (direction == MovingDirections::Next) {
        return this->next;
    } else {
        return this->prev;
    }
}

Option* Locations::getOption(unsigned short int index) {

    
    if (index < staticOptions.size()) {
        //because we start the map at one, we need to add one back to the index for the
        //static options.
        return staticOptions[index + 1];
    }
    else if (index >= staticOptions.size() && index < staticOptions.size() + dynamicOptions.size()) {
        Option* option = dynamicOptions[index];
        //Since dynamic options is a vector and the elements are shown AFTER the dynamic options,
        //the index passed is the static options size, so subtract the size
        dynamicOptions.erase(dynamicOptions.cbegin() + (index - staticOptions.size()));
        return option;
    }
    else {
        return nullptr;
    }

}
