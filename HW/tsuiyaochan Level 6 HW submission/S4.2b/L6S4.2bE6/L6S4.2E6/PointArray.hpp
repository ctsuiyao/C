//
//  PointArray.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef PointArray_hpp
#define PointArray_hpp

#include "Point.hpp"
#include "ArrayC.hpp"
#include <iostream>
#include <stdio.h>
namespace CHRISTINE
{
    namespace Containers
    {
        class PointArray : public ArrayC<CAD::Point>
        {
        private:
            
        public:
            PointArray();                                      // Default constructor
            PointArray(int size);                              // Constructor with array size
            PointArray(const PointArray& s);                   // Copy constructor
            ~PointArray();                                     // Destructor
            PointArray& operator = (const PointArray& s);      // Assignment operator
            
            double Length() const;                             // Total length of the array
        };
    }
}


#endif /* PointArray_hpp */
