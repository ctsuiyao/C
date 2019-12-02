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
//#include "Array.cpp" // Can #include "Array.hpp" instead if "Array.cpp" is included in "Array.hpp"
#include "ArrayC.hpp"
using namespace CHRISTINE::CAD;
using namespace CHRISTINE::Containers;


int main(int argc, const char * argv[]) {
    
    ArrayC<int> intArray1;
    ArrayC<int> intArray2;
    ArrayC<double> doubleArray;
    cout<<intArray1.DefaultSize()<<endl;    // 8, the default size
    cout<<intArray2.DefaultSize()<<endl;    // 8, the default size
    cout<<doubleArray.DefaultSize()<<endl;  // 8, the default size
    
    intArray1.DefaultSize(15);
    
    cout<<intArray1.DefaultSize()<<endl;    // 15
    cout<<intArray2.DefaultSize()<<endl;    // 15
    cout<<doubleArray.DefaultSize()<<endl;  // 8, the default size
    /*
    When the default size of an instantiation is changed using its setter, the default size of all future default-constructed Array objects is reset.
    */
    
    return 0;
}
