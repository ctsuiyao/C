//
//  main.cpp
//  L3S2.2E2
//
//  Created by Christine Chan on 11/12/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include <iostream>
#include <string>
#include "OutOfBoundsException.hpp"
#include "Point.hpp"
#include "LineSegment.hpp"
#include "Circle.hpp"
#include "ArrayC.hpp"
using namespace CHRISTINE::CAD;
using namespace CHRISTINE::Containers;


int main(int argc, const char * argv[]) {
     
    ArrayC arr = ArrayC(3);
    
    try
    {
        cout << arr[5] << endl;
    }
    catch (ArrayException& ex)           // Catch exception object
    {
        cout << ex.GetMessage() << endl; // Print the error message
    }
    catch(...)
    {
        cout << "An unhandled exception has occurred..." << endl;
    }
    
    cout << arr.GetElement(1) << endl;
    
    return 0;
}
