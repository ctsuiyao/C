//
//  ArrayC.cpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/13.
//  Copyright © 2019 Christine Chan. All rights reserved.
//
#include "OutOfBoundsException.hpp"
#include "ArrayC.hpp"
#include "Point.hpp"

namespace CHRISTINE {
    namespace Containers {
        ArrayC::ArrayC() : m_size(10), m_data(new CAD::Point[10])
        {
        }

        ArrayC::ArrayC(int array_size) : m_size(array_size), m_data(new CAD::Point[array_size])
        {
            
        }

        ArrayC::ArrayC(const ArrayC& m) : m_size(m.m_size), m_data(new CAD::Point[m.m_size])
        {
            for (int i = 0; i < m_size; i++)
            {
                // Assign each data by loop
                m_data[i] = m.m_data[i];
            }
        }

        ArrayC::~ArrayC()
        {
            // Destructor -- Delete ArrayC
            delete[] m_data;
        }

        int ArrayC::Size() const
        {
            return m_size;
        }

        CAD::Point& ArrayC::GetElement(int index) const
        {
            if (index >= m_size || index < 0)
                throw OutOfBoundsException(index);
            return m_data[index];
        }

        // Sets element to a certain specified Index
        void ArrayC::SetElement(int index, const CAD::Point& p)
        {
            if (index >= m_size || index < 0)
                throw OutOfBoundsException(index);
    
            m_data[index] = p;
        }


        ArrayC& ArrayC::operator=(const ArrayC& m)
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
    
        
        CAD::Point& ArrayC::operator [] (int index)
        {
            if (index >= m_size || index < 0)
                throw OutOfBoundsException(index);
    
            return m_data[index];
        }
        
        const CAD::Point& ArrayC::operator [] (int index) const
        {
            if (index >= m_size || index < 0)
                throw OutOfBoundsException(index);
            
            return m_data[index];
        }
    }
}
