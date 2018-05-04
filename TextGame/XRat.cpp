//
//  XRat.cpp
//  TextGame
//
//  Created by Ezekiel Williams on 5/3/18.
//  Copyright © 2018 Ezekiel Williams. All rights reserved.
//

#include "XRat.hpp"

XRat::XRat(unsigned int level)
: Enemy(level, "XRat")
{
    
}

XRat::~XRat() {
    
}

void XRat::showStats() const {
    std::cout << "STATS" << std::endl;
}
