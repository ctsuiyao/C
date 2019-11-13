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


int main(int argc, const char * argv[]) {
    const Point p1(1.5, 3.9);
    const Point p2(8.0, 5.2);
    
    const LineSegment line(p1, p2);
   
    cout << line.ToString() << "\n" << endl;
    cout << "The length of the line is ";
    cout << line.Length() << "\n" << endl;
    return 0;
}
