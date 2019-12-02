//
//  NumericArray.cpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/30.
//  Copyright © 2019 Christine Chan. All rights reserved.
//
#ifndef NumericArray_cpp
#define NumericArray_cpp


#include "NumericArray.hpp"
#include <iostream>
using namespace std;

namespace CHRISTINE
{
    namespace Containers
    {
        
        //===================== Constructors, destructor and assignment operator =====================
        template <typename T>
        NumericArray<T>::NumericArray() : ArrayC<T>::ArrayC()  // Call default constructor of base class
        {
        }
        
        template <typename T>
        NumericArray<T>::NumericArray(int size) : ArrayC<T>::ArrayC(size)
        {
        }
        
        template <typename T>
        NumericArray<T>::NumericArray(const NumericArray<T>& s) : ArrayC<T>::ArrayC(s)
        {
        }
        
        template <typename T>
        NumericArray<T>::~NumericArray()
        {
        }
        
        template <typename T>
        NumericArray<T>& NumericArray<T>::operator = (const NumericArray<T>& s)
        {
            if (this == &s)
                return *this;
            
            ArrayC<T>::operator = (s);
            return *this;
        }
        
        
        //=================================== Numeric functionality ===================================
        template <typename T>
        NumericArray<T> NumericArray<T>::operator + (const NumericArray<T>& arr) const
        { // operator + ()
            
            if (this->Size() != arr.Size())
                throw SizeMismatchException("mismatch");
            NumericArray<T> new_arr(*this);
            
            for (int index=0; index<arr.Size(); index++)
            {
                new_arr[index] = arr.GetElement(index) + this->GetElement(index);
            }
            
            return new_arr;
        }
    
        template <typename T>
        NumericArray<T> NumericArray<T>::operator * (const T& factor) const
        {
            NumericArray<T> result(*this);
            
            for (int i = 0; i < result.Size(); i++)
            {
                result[i] *= factor;
            }

            return result;
        }
        
        template <typename T>
        T NumericArray<T>::DotProduct(const NumericArray<T>& arr) const
        { // Function DotProduct()
        
            if (this->Size() != arr.Size())
                throw SizeMismatchException("mismatch");
            
            T dot_product(0);
            
            for (int index=0; index<arr.Size(); index++)
                dot_product += (ArrayC<T>::operator [] (index) * arr[index]);
            
            return dot_product;
        }
        
    }
}

#endif /* NumericArray_cpp */
