//
//  TotalLengthException.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef TotalLengthException_hpp
#define TotalLengthException_hpp

#include "ArrayException.hpp"
#include <sstream>

class TotalLengthException : public ArrayException
{
private:
    int m_index;
    
public:
    TotalLengthException(int index)
    { // Constructor with "index" as input, and store to data member
        
        m_index = index;
    }
    
    string GetMessage()
    { // Return the the error message
        
        stringstream ss;
        ss << "This Point array of size " << m_index << " does not have enough elements for calculating Length()." << endl;
        
        return ss.str();
    }
};
#endif /* TotalLengthException_hpp */
