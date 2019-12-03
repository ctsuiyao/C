//
//  SizeMismatchException.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef SizeMismatchException_hpp
#define SizeMismatchException_hpp

#include "ArrayException.hpp"
#include <sstream>
#include <stdio.h>

class SizeMismatchException : public ArrayException
{
private:
    string m_chars;
    
public:
    SizeMismatchException(string c)
    {
        m_chars = c;
    }
    
    string GetMessage()
    {
        stringstream ss;
        ss << "The size of the arrays " << m_chars << endl;
        
        return ss.str();
    }
};

#endif /* SizeMismatchException_hpp */
