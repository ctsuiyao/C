//
//  StackFullException.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef StackFullException_hpp
#define StackFullException_hpp

#include <stdio.h>
#include "StackException.hpp"
#include <sstream>

class StackFullException : public StackException
{
private:
    string m_chars;
    
public:
    StackFullException(string c)
    {
        m_chars = c;
    }
    
    string GetMessage()
    {
        stringstream ss;
        ss << "\nThe stack is " << m_chars << "." << endl;
        
        return ss.str();
    }
};
#endif /* StackFullException_hpp */
