//
//  ArrayC.cpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/13.
//  Copyright © 2019 Christine Chan. All rights reserved.
//
#ifndef ArrayC_cpp
#define ArrayC_cpp

#include "OutOfBoundsException.hpp"
#include "ArrayC.hpp"
#include "Point.hpp"

namespace CHRISTINE {
    namespace Containers {
    
        template <typename T>
        int ArrayC<T>::d_size = 8;
    
        template <typename T>
        ArrayC<T>::ArrayC() : m_size(ArrayC<T>::d_size), m_data(new T[ArrayC<T>::d_size])
        {
        }
        template <typename T>
        ArrayC<T>::ArrayC(int array_size) : m_size(array_size), m_data(new T[array_size])
        {
            
        }
        template <typename T>
        ArrayC<T>::ArrayC(const ArrayC<T>& m) : m_size(m.m_size), m_data(new T[m.m_size])
        {
            for (int i = 0; i < m_size; i++)
            {
                // Assign each data by loop
                m_data[i] = m.m_data[i];
            }
        }
        template <typename T>
        ArrayC<T>::~ArrayC()
        {
            // Destructor -- Delete ArrayC
            delete[] m_data;
        }
        template <typename T>
        int ArrayC<T>::Size() const
        {
            return m_size;
        }
    
        template <typename T>
        int ArrayC<T>::DefaultSize() const
        {
            return d_size;
        }
    
        template <typename T>
        T& ArrayC<T>::GetElement(int index) const
        {
            if (index >= m_size || index < 0)
                throw OutOfBoundsException(index);
            return m_data[index];
        }
    
        template <typename T>
        void ArrayC<T>::DefaultSize(int size)
        {
            d_size = size;
        }
    
        template <typename T>
        void ArrayC<T>::SetElement(int index, const T& p)
        {
            if (index >= m_size || index < 0)
                throw OutOfBoundsException(index);
    
            m_data[index] = p;
        }

        template <typename T>
        ArrayC<T>& ArrayC<T>::operator=(const ArrayC<T>& m)
        {
            cout<<"Assignment operator is called!"<<endl;
            if (this==&m)
            {
                return *this;
            }
            delete[] m_data;
            m_size=m.m_size;
            m_data=new CAD::Point[m_size];
            for (int i=0;i<m_size;i++)
            {
                m_data[i]=m.m_data[i];
            }
        return *this;
        }
    
        template <typename T>
        T& ArrayC<T>::operator [] (int index)
        {
            if (index >= m_size || index < 0)
                throw OutOfBoundsException(index);
    
            return m_data[index];
        }
        template <typename T>
        const T& ArrayC<T>::operator [] (int index) const
        {
            if (index >= m_size || index < 0)
                throw OutOfBoundsException(index);
            
            return m_data[index];
        }
    }
}
#endif
