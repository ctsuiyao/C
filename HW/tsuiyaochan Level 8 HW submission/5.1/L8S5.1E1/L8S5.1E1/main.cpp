//
//  main.cpp
//  L3S2.2E2
//
//  Created by Christine Chan on 11/12/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include <boost/shared_ptr.hpp>
#include "Point.hpp"
#include "LineSegment.hpp"
#include "Circle.hpp"
#include "ArrayC.hpp"
using namespace CHRISTINE::CAD;
using namespace CHRISTINE::Containers;


int main() {
    // Typedefs for a shared pointer to shape and for an array of shared pointers to shape
    typedef boost::shared_ptr<Shape> ShapePtr;
    typedef ArrayC<ShapePtr> ShapeArray;
    
    // Create an array of N shared pointers to shapes
    int N = 3;
    ShapeArray shapes1(N);
    
    // Create shared pointers to Point, Line, and Circle
    ShapePtr p(new Point(3.0, 4.0));                // Point
    ShapePtr l(new LineSegment(Point(), Point(3.0, 4.0))); // Line
    ShapePtr c(new Circle(Point(), LineSegment()));           // Circle
    
    /* The 3 unnamed temporary Point objects for creating 'l' and 'c' are destroyed. */

    // Fill the array with the defined shared pointers
    shapes1[0] = p;
    shapes1[1] = l;
    shapes1[2] = c;
    
    // Print the shapes
    cout << endl;
    for (int i = 0; i < N; ++i)
        cout << (*shapes1[i]).ToString() << endl;

    cout << endl;
    
    return 0;
}
