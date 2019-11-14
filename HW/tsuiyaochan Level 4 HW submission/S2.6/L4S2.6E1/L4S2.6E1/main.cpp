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
    cout << p1.ToString();
    cout << "\n";
    cout << p2.ToString();
    cout << "\n";
    
    // In the main program, using declaration for using a single class (Line).
    using namespace CHRISTINE::CAD;
    LineSegment l(p1, p2);
    cout << l.ToString();
    cout << "\n";
    
    //• In the main program, using the Circle class by creating a shorter alias for the YourName::CAD namespace.
    namespace CC = CHRISTINE::CAD;
    CC::Circle c;
    cout << c.ToString();
    cout << "\n";
    return 0;
}
