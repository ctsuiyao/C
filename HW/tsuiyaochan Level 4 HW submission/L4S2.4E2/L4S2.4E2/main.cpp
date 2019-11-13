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


int main(int argc, const char * argv[]) {
    const Point p1(0.0, 0.0);
    const Point p2(3.0, 0.0);
    const LineSegment line(p1, p2);
    const Circle c(p1, line);
    
    cout << p1 << endl;
    cout << p2 << endl;
    cout << line << endl;
    cout << c << endl;
    
    return 0;
}
