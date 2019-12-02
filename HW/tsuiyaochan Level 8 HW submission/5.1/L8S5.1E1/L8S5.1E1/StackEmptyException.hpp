//
//  StackEmptyException.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef StackEmptyException_hpp
#define StackEmptyException_hpp

#include "StackException.hpp"
#include <sstream>
#include <stdio.h>

class StackEmptyException : public StackException
{
private:
    string m_chars;
    
public:
    StackEmptyException(string c)
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
#endif /* StackEmptyException_hpp */
