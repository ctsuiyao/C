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
#include "LineSegment.hpp"
#include "Circle.hpp"

using namespace std;
namespace CHRISTINE {
    namespace Containers {
        template <typename T> class ArrayC
        {
        private:
            T *m_data;
            int m_size;
            static int d_size;
            
        public:
            // Constructors
            ArrayC();                                // Default constructor
            ArrayC(int s);                           // Initialize with size
            ArrayC(const ArrayC<T>& m);              // initialize a copy constructor
            virtual ~ArrayC();
            
            // Accessing functions
            // Get functions
            int DefaultSize() const;
            T& GetElement(int index) const;
            // Returns size of array
            int Size() const;
            
            // Set functions
            void DefaultSize(int size);
            void SetElement(int index, const T& p);
            
            // Assignment opeartor
            ArrayC<T>& operator = (const ArrayC<T>& m);
             
            
             
            // Square bracket operator for changable Points
            T& operator [] (int index);
            // Square bracket operator for constant Points
            const T& operator [] (int index) const;
        };
    }

}

#ifndef ArrayC_cpp
#include "ArrayC.cpp"
#endif


#endif /* ArrayC_hpp */
