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
    Shape* shapes[3];
    shapes[0]=new Shape;
    shapes[1]=new Point;
    shapes[2]=new Circle;
    for (int i=0; i!=3; i++) delete shapes[i];
    
    return 0;
}
