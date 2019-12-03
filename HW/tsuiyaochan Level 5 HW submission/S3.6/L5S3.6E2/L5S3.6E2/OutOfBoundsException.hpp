//
//  OutOfBoundsException.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/28.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef OutOfBoundsException_hpp
#define OutOfBoundsException_hpp

#include "ArrayException.hpp"
#include <sstream>
#include <stdio.h>

class OutOfBoundsException : public ArrayException
{
private:
    int m_index;
    
public:
    OutOfBoundsException(int index)
    {
        m_index = index;
    }
    
    string GetMessage()
    {
        stringstream ss;
        ss << "The index " << m_index << " is out of bounds." << endl;
        
        return ss.str();
    }
};

#endif /* OutOfBoundsException_hpp */
