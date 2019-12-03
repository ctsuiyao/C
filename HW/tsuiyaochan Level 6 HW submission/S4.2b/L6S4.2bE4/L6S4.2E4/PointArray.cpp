//
//  PointArray.cpp
//  L3S2.2E2
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include "PointArray.hpp"
#include "SizeMismatchException.hpp"
#include "TotalLengthException.hpp"

namespace CHRISTINE
{
    namespace Containers
    {
        // Default constructor
        PointArray::PointArray() : ArrayC<CAD::Point>()
        {
        }
        
        // Constructor with array size
        PointArray::PointArray(int size) : ArrayC<CAD::Point>(size)
        {
        }
        
        // Copy constructor
        PointArray::PointArray(const PointArray& s) : ArrayC<CAD::Point>(s)
        {
        }
        
        // Destructor
        PointArray::~PointArray()
        {
        }
        
        // Assignment operator
        PointArray& PointArray::operator = (const PointArray& s)
        {
            if (this == &s)
                return *this;
            
            ArrayC<CAD::Point>::operator = (s);
            return *this;
        }
        
        // Total length between the points in the array
        double PointArray::Length() const
        {
            if (this->Size() < 2)
                throw TotalLengthException(this->Size());
            
            double length = 0.0;
            for (int i = 1; i < this->Size(); i++)
            {
                length += (this->GetElement(i-1)).Distance(this->GetElement(i)); 
            }
            
            return length;
        }
        
    }
}
