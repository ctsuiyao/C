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

namespace CHRISTINE
{
    namespace Containers
    {
        
        // Constructors, destructor and assignment operator
        template <typename T>
        Stack<T>::Stack() : m_current(0), m_array()
        {
        }
        
        template <typename T>
        Stack<T>::Stack(int size) : m_current(0), m_array(size)
        {
        }
        
        template <typename T>
        Stack<T>::Stack(Stack& s) : m_current(s.m_current), m_array(s.m_array)
        {
        }
        
        template <typename T>
        Stack<T>::~Stack()
        {
        }
    
        // Assignment operator =
        template <typename T>
        Stack<T>& Stack<T>::operator = (const Stack<T>& s)
        {
    
            if (this == &s)
                return *this;
            
            m_current = s.m_current;
            m_array = s.m_array;

            return *this;
        }
        
        
        // Functionality
        template <typename T>
        void Stack<T>::Push(T element)
        {
            m_array[m_current] = element;
            m_current++;
        }
        
        template <typename T>
        T Stack<T>::Pop()
        {
            T value = m_array[m_current-1];
            --m_current;
            
            return value;
        }

    }
}


#endif /* Stack_cpp */
