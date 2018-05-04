//
//  XRat.hpp
//  TextGame
//
//  Created by Ezekiel Williams on 5/3/18.
//  Copyright © 2018 Ezekiel Williams. All rights reserved.
//

#ifndef XRat_hpp
#define XRat_hpp
#pragma once

#include <iostream>
#include "Enemy.hpp"

class XRat: public Enemy {
private:
    
public:
    virtual void showStats() const;
    
public:
    virtual ~XRat();
    XRat(unsigned int level);
    
};

#endif /* XRat_hpp */
