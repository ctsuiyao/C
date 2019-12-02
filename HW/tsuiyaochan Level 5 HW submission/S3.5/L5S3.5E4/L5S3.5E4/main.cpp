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
    
    /*
     No, Shape is an abstract class as it has a pur virtual member function, and it cannot be instantiated.
     */
    
    Shape* shapes[5];
    
    shapes[0] = new Point;                                         // Default constructor
    shapes[1] = new Point(3.0, 4.0);                               // Constructor with two coordinates
    shapes[2] = new LineSegment;                                   // Default constructor
    shapes[3] = new LineSegment(Point(1.0, 2.5), Point(3.4, 5.2)); // Constructor
    shapes[4] = new Circle;                                        // Default constructor
    
    for (int i=0; i<5 ; i++)
    {
        shapes[i]->Draw();
        cout << shapes[i]->ToString() << endl ;
        delete shapes[i];
    }

    return 0;
}
