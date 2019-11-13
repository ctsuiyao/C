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
    // declaire using default constructor
    const Point* p1;
    p1 = new Point;
    cout << p1->ToString() << endl;
    //cout << (*p1).ToString() << endl;
    delete p1;
    
    // declaire using constructor with coordinate
    const Point* p2;
    p2 = new Point(3.3, 4.4);
    cout << p2->ToString() << endl;
    //cout << (*p1).ToString() << endl;
    delete p2;
    
    // declaire using copy constructor
    const Point* p3 = new Point(*p2);
    cout << "The distance from p3 to orgin is: ";
    cout << p3->Distance() << endl;
    delete p3;
    
    double a;
    cout << "Please enter the length of the array: ";
    cin >> a;
    
    Point* p4;
    p4 = new Point[a];
    
    delete[] p4;
    

    return 0;
}
