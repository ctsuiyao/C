//
//  OptionException.hpp
//  groupA
//
//  Created by Christine on 2019/12/3.
//  Copyright © 2019 Christine. All rights reserved.
//

#ifndef OptionException_hpp
#define OptionException_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class OptionException
{
public:
    // Constructor and destructor
    OptionException()
    {
    }

    virtual ~OptionException()
    {
    }

    virtual string GetMessage() = 0;
};

#endif /* OptionException_hpp */
