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
    Shape s;// Create shape.
    Point p(10, 20);// Create point.
    
    LineSegment l(Point(1,2), Point(3, 4)); // Create line.
//    cout<<s.ToString()<<endl;// Print shape.
//    cout<<p.ToString()<<endl;// Print point.
//    cout<<l.ToString()<<endl;// Print line
//    cout<<"Shape ID: "<<s.ID()<<endl; // ID of the shape.
//    cout<<"Point ID: "<<p.ID()<<endl; // ID of the point. Does this work? This works
//    cout<<"Line ID: "<<l.ID()<<endl; // ID of the line. Does this work? This works.
    
    Shape* sp; // Create pointer to a shape variable.
    sp=&p; // Point in a shape variable. Possible? Yes, this work
    cout<< "When called ToString() in Shape*" << endl;
    cout<<sp->ToString()<<endl;// What is printed? Point(10, 20), the point of point p
    
    
    
    // Create and copy Point p to new point.
//    Point p2;
//    p2=p;
//    cout<<p2<<", "<<p2.ID()<<endl; // Is the ID copied if you do not call
    // the base class assignment in point? Yes it copied the point p's ID; it won't copy the point ID if i didn't use the shape::operator in the assign operator in point class
    return 0;
}
