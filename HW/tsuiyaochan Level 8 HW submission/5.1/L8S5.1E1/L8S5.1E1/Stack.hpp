//
//  Stack.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include "ArrayC.hpp"
using namespace CHRISTINE::Containers;

namespace CHRISTINE
{
    namespace Containers
    {
        template <typename T, int size> class Stack
        {
        private:
            int m_current;                            // Current index
            ArrayC<T> m_array;                        // Data storage
            
        public:
            Stack();                                 // Default constructor
            Stack(Stack& s);                         // Copy Constructor
            virtual ~Stack();                        // Destructor
            Stack& operator = (const Stack& s);      // Assignment operator
            
            void Push(T element);                    // Add an element to the top of the stack
            T Pop();                                 // Remove the top element from the s
        };
    }
}



#ifndef Stack_cpp
#include "Stack.cpp"
#endif

#endif /* Stack_hpp */
