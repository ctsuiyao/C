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



int main(int argc, const char * argv[]) {
    //    In the main program, the full namespace for Point class.
    CHRISTINE::CAD::Point p1(1.0, 1.0);
    CHRISTINE::CAD::Point p2(4.0, 1.0);
    cout << p1;
    cout << "\n";
    cout << p2;
    cout << "\n";
    
    // In the main program, using declaration for using a single class (Line).
    using CHRISTINE::CAD::LineSegment;
    LineSegment line(p1, p2);
    cout << line;
    cout << "\n";
    
    
    // Using declaration for a complete namespace (Containers).
    using namespace CHRISTINE::Containers;
    ArrayC arr1 = ArrayC(3);
    arr1.SetElement(0, p1);
    cout << "\narr1[0] is " << arr1.GetElement(0) << endl;
    
    
    // Using the Circle class by creating a shorter alias.
    namespace CCH = CHRISTINE::CAD;
    CCH::Circle c(p1, line);
    cout << c;
    return 0;
}
