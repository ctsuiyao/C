//
//  Point.hpp
//  L3S2.2E2
//
//  Created by Christine Chan on 11/12/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

#include <iostream>
using namespace std;

class Point
{
private:
    double px;
    double py;
    
public:
    // Constructors
    Point();                                // Default constructor
    Point(double xval, double yval);        // Initialize with x and y value
    Point(const Point &pc);                 // initialize a copy constructor
    ~Point();
    
    // Accessing functions
    double X() const ;                    // The x-coordinate
    void X(double newX);
    double Y() const;                    // The y-coordinate
    void Y(double newY);
    
    void ToString() const;
    double Distance() const; // Calculate the distance to the origin (0, 0).
    double Distance(const Point& p) const; // Calculate the distance between two points.
};

#endif /* Point_hpp */
