//
//  WrongShapeException.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef WrongShapeException_hpp
#define WrongShapeException_hpp

#include <string>
#include <sstream>
using namespace std;

class WrongShapeException
{
private:
    string m_chars;
    
public:
    WrongShapeException(string chars)
    {
        m_chars = chars;
    }
    
    string GetMessage()
    { 
        stringstream ss;
        ss << "Shape '" << m_chars << "' does not exist." << endl;
        
        return ss.str();
    }
};

#endif /* WrongShapeException_hpp */
