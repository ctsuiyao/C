//
//  NumericArray.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/30.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef NumericArray_hpp
#define NumericArray_hpp

#include <stdio.h>
#include <iostream>

#include "ArrayC.hpp"

using namespace std;

namespace CHRISTINE
{
    namespace Containers
    {
        template <typename T> class NumericArray : public ArrayC<T>
        {

        private:
            
        public:
            NumericArray();                                                // Default constructor
            NumericArray(int size);                                        // Constructor with size
            NumericArray(const NumericArray<T>& s);                        // Copy constructor
            virtual ~NumericArray();                                       // Destructor
            NumericArray<T>& operator = (const NumericArray<T>& s);        // Assignment operator
            
            NumericArray<T> operator + (const NumericArray<T>& arr) const; // Add array elements
            NumericArray<T> operator * (const T& factor) const;            // Multiple operator
            T DotProduct(const NumericArray<T>& arr) const;                // Dot product
            
        };
    }
}
        
    

#ifndef NumericArray_cpp     // Must be the same name as in source file #define
#include "NumericArray.cpp"
#endif

#endif /* NumericArray_hpp */
