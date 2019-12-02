//
//  StackException.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef StackException_hpp
#define StackException_hpp

#include <stdio.h>
#include <string>
using namespace std;

class StackException
{
public:
    virtual string GetMessage() = 0;
};

#endif /* StackException_hpp */
