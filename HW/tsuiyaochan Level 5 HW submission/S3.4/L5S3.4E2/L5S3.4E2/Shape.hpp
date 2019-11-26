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
class Shape
{
private:
    int id;
public:
    Shape();                                //Default Constructor
    ~Shape();                               //Destructor
    Shape(const Shape& s);                  //Copy Constructor
}
#endif /* Shape_hpp */
