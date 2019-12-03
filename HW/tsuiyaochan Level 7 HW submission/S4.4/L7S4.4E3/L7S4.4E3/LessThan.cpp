//
//  LessThan.cpp
//  L7S4.4E1
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine. All rights reserved.
//

#include "LessThan.hpp"

LessThan::LessThan(double value) : t(value)
{
}

LessThan::~LessThan()
{ // Destructor
}

bool LessThan::operator () (double val)
{
    return (val < threshold);
}
