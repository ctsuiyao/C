//
//  ArrayException.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/28.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef ArrayException_hpp
#define ArrayException_hpp

#include <stdio.h>
#include <string>
using namespace std;

class ArrayException
{
public:
    virtual string GetMessage() = 0;
};

#endif /* ArrayException_hpp */
