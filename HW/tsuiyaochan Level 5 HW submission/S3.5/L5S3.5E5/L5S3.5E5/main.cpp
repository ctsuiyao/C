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


int main(int argc, const char * argv[]) {
     
    Point p(3.0, 4.0);                        // Create a Point object
    LineSegment l(Point(1.0, 2.0), Point(3.0, 4.0)); // Create a Line object
    Circle c(p, l);                         // Create a Circle object
    
    p.Print();                                // Print info of Point p
    l.Print();                                // Print info of Line l
    c.Print();                                // Print info of Circle c
    
    return 0;
}
