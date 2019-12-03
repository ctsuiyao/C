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
    
    int size(4);
    
    ArrayC<Point> p(size);
    ArrayC<LineSegment> l(size);
    
    p[1].Draw();
    cout << l[3] << endl;
    
    return 0;
}
