//
//  NoImplementationException.hpp
//  groupA
//
//  Created by Christine on 2019/12/3.
//  Copyright © 2019 Christine. All rights reserved.
//

#ifndef NoImplementationException_hpp
#define NoImplementationException_hpp

#include "OptionException.hpp"
#include <sstream>
#include <stdio.h>
using namespace std;

class NoImplementationException : public OptionException
{
private:
    string m_functionName;

public:
    // Constructors and destructor
    NoImplementationException() : OptionException()
    {
    }
    
    // Constructor accepting erroneous function name
    NoImplementationException(string functionName) : OptionException()
    {
        m_functionName = functionName;
    }
    // Destructor
    virtual ~NoImplementationException()
    {
    }

    string GetMessage()
    {
        stringstream stream;

        stream << "No implementation of the " << m_functionName << " function in the derived class";

        return stream.str();
    }
};


#endif /* NoImplementationException_hpp */
