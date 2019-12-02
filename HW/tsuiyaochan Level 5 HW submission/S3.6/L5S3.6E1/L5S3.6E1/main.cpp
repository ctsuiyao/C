//
//  main.cpp
//  L3S2.2E2
//
//  Created by Christine Chan on 11/12/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include <iostream>
#include <string>
#include "Point.hpp"
#include "LineSegment.hpp"
#include "Circle.hpp"
#include "ArrayC.hpp"
using namespace CHRISTINE::CAD;
using namespace CHRISTINE::Containers;


int main(int argc, const char * argv[]) {
     
    // Create an Array object and access an element that does not exist. Run the program. What happens?
    
    ArrayC arr = ArrayC(3);          // Create an array of Point with 3 elements
    //cout << arr[5] << endl;          // Runtime error: terminating with uncaught exception of type int
    
    try
    {
        cout << arr[5] << endl;
    }
    catch (int err)
    {
        if (err == -1)
            cout << "Array index out of bounds..." << endl;
    }
    catch(...)
    {
        cout << "An unhandled exception has occurred..." << endl;
    }
    
    cout << arr.GetElement(1) << endl;
    
    return 0;
}
