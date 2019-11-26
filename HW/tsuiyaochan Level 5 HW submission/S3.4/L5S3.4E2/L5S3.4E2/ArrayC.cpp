//
//  ArrayC.cpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/13.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include "ArrayC.hpp"
#include "Point.hpp"
namespace CHRISTINE {
    namespace Containers {
        ArrayC::ArrayC()
        {
            // Default Constructor
            m_data = new CAD::Point[10];
            m_size = 10;
        }

        ArrayC::ArrayC(int array_size)
        {
            m_data = new CAD::Point [array_size];
            m_size = array_size;
        }

        ArrayC::ArrayC(const ArrayC& m)
        {
            // Determine the size of my_arr
            m_size = m.m_size;

            // Create an array by constructor
            m_data = new CAD::Point[m_size];

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
            if (index >= m_size || m_size < 0)
            {
                // If out of range, return the first element
                cout << "Index is out of range" << endl;
                return m_data[0];
            }
            else
            {
                // Otherwise, return the proper one
                return m_data[index];
            }
        }

        // Sets element to a certain specified Index
        void ArrayC::SetElement(int index, const CAD::Point& p)
        {
            // Check for out of range error
            if (index >= m_size || index < 0)
            {
              printf("Index out of range; setting element failed\n");
            }
            // If within bounds, do the copying
            else
            {
              m_data[index] = p;
            }
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
    }
}
