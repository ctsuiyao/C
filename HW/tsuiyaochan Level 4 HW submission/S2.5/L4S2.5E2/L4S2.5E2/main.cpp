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
    Point** pp = new Point*[3];
    for (int i = 0; i < 3; i++) {
        Point* pt = new Point;
        pp[i] = pt; // assign the address of integer.
    }
    for (int i = 0; i < 3; i++) {
        cout << "Value of array[" << i << "] = ";
        cout << *pp[i] << endl;
    }


    for (int i = 0; i <= 2; i++)
    {
        delete pp[i];
    }


    delete[] pp;
    return 0;
}
