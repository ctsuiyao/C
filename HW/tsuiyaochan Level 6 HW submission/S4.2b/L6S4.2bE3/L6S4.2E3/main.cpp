//
//  main.cpp
//  L3S2.2E2
//
//  Created by Christine Chan on 11/12/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include <iostream>
#include <string>
#include "PointArray.hpp"
using namespace CHRISTINE::CAD;
using namespace CHRISTINE::Containers;


int main(int argc, const char * argv[]) {
    // create point array
    PointArray p_arr1;          // Default constructor
    PointArray p_arr2(3);       // Constructor with array size
    PointArray p_arr3(p_arr2);  // Copy constructor

    
    // DefaultSize() == Size()
    cout << "Default size of p_arr1: " << p_arr1.DefaultSize() << endl;
    cout << "Size of p_arr1: " << p_arr1.Size() << "\n\n";
    
    
    // try assign operator
    for (int i = 0; i < p_arr2.Size(); i++)
    {
        p_arr2[i] = Point(i,i+1);
    }
    
    
    // assignment operator = ()
    p_arr3 = p_arr2;  // Assign p_arr1 to p_arr3
    
    cout << "Testing operator = ()..." << endl;
    for (int i = 0; i < p_arr3.Size(); i++)
    {
        cout << "p_arr3[" << i << "] = " << p_arr3[i] << endl;  // Print Point if parr1[i]==parr3[i]
    }
    cout << endl;
    
    
    // Test function Length()
    cout << "Total length of the points in p_arr1: " << p_arr3.Length() << endl;
    
    
    // Test Total Length Exception catching
    PointArray p_arr4(1);    // Create a Point array with size 1
    try
    {
        cout << p_arr4.Length() << endl;
    }
    catch (ArrayException& ex)
    {
        cout << ex.GetMessage() << endl;
    }
    catch (...)
    {
        cout << "An unhandled exception has occurred..." << endl;
    }
    
    return 0;
}
