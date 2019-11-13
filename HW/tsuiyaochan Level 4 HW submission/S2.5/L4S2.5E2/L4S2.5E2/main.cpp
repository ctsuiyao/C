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
    // Create array of pointers
    Point* pp;
    pp = new Point[3];
    
    
    
    Point* p3 = new Point();
    Point* p4 = new Point();
    Point* p5 = new Point();
    
    Point** arr = new Point*[3] {p3, p4, p5};
    for (int i = 0; i <= 2; i++)
    {
        delete arr[i];
    }
//
//    Point* p1 = new Point;
//
//    for (int i = 0; i < 3; i++) {
//        Point* dp;
//        dp = new Point;
//        pp[i] = *dp; // assign the address of integer.
//    }
//
//    for (int i = 0; i < 3; i++) {
//        cout << "Value of array[" << i << "] = ";
//        cout << pp[i] << endl;
//    }
//    for (int i = 0; i < 3; i++) {
//        delete *pp[i];
//    }
    delete[] pp;
    return 0;
}
