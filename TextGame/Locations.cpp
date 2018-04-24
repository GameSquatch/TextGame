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
    //staticOptionsIndex = 0;
    
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
    dynamicOptions.push_back(option);
}

void Locations::showOptions() const {
    std::cout << "\nOptions\n";
    
    for (unsigned short int i = 0; i < dynamicOptions.size(); ++i) {
        std::cout << (i + 1) << ". " << dynamicOptions[i]->getOutputText() << std::endl;
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
    if (index >= dynamicOptions.size() || index < 0) {
        return nullptr;
    }
    return dynamicOptions[index];
}
