//
//  ArrayC.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/13.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef ArrayC_hpp
#define ArrayC_hpp

#include <stdio.h>
#include <iostream>
#include "Point.hpp"

using namespace std;
namespace CHRISTINE {
namespace CAD {
    class ArrayC
    {
    private:
        Point* m_data;
        int m_size;
        
    public:
        // Constructors
        ArrayC();                                // Default constructor
        ArrayC(int s);        // Initialize with size
        ArrayC(const ArrayC& m);                 // initialize a copy constructor
        ~ArrayC();
        
        // Accessing functions
        Point& GetElement(int index) const;
        void SetElement(int index, const Point& p);
        
        // Assignment opeartor
        ArrayC& operator = (const ArrayC& m);
         
        // Returns size of array
        int Size() const;
         
        // Square bracket operator for changable Points
        Point& operator [] (int index);
        // Square bracket operator for constant Points
        const Point& operator [] (int index) const;
    };
}}
#endif /* ArrayC_hpp */
