//
//  Stack.cpp
//  L3S2.2E2
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef Stack_cpp
#define Stack_cpp

#include "Stack.hpp"
#include "SizeMismatchException.hpp"
#include "OutOfBoundsException.hpp"
#include "StackFullException.hpp"
#include "StackEmptyException.hpp"

namespace CHRISTINE
{
    namespace Containers
    {
        
        // Constructors, destructor and assignment operator
        template <typename T, int size>
        Stack<T,size>::Stack() : m_current(0), m_array(size)
        {
        }
        
        template <typename T, int size>
        Stack<T,size>::Stack(Stack& s) : m_current(s.m_current), m_array(s.m_array)
        {
        }
        
        template <typename T, int size>
        Stack<T,size>::~Stack()
        {
        }
    
        // Assignment operator =
        template <typename T, int size>
        Stack<T,size>& Stack<T,size>::operator = (const Stack<T,size>& s)
        {
    
            if (this == &s)
                return *this;
            
            m_current = s.m_current;
            m_array = s.m_array;

            return *this;
        }
        
        
        // Functionality
        template <typename T, int size>
        void Stack<T,size>::Push(T element)
        {
            try
            {
                m_array[m_current] = element;
                m_current++;
            }
            catch (OutOfBoundsException& ex)
            {
                throw StackFullException("full");
            }
        }
        
        template <typename T, int size>
        T Stack<T,size>::Pop()
        {
            try
            {
                --m_current;
                return m_array[m_current];
            }
            catch(OutOfBoundsException& ex)
            {
                m_current = 0;
                throw StackEmptyException("empty");
            }
        }

    }
}


#endif /* Stack_cpp */
