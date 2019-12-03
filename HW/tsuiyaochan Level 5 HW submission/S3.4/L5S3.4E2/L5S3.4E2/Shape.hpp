//
//  Shape.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/24.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Shape
{
private:
    int id;
public:
    Shape();                                //Default Constructor
    Shape(const Shape& s);                  //Copy Constructor
    virtual ~Shape();                       //Destructors
    
    // Operator overloading
    Shape& operator = (const Shape& s); // Assignment operator
    
    string ToString() const;
    
    // Accessing functions
    int ID() const;
};
#endif /* Shape_hpp */
