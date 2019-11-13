//
//  Point.cpp
//  L3S2.2E2
//
//  Created by Christine Chan on 11/12/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//
#include <sstream>
#include <cmath>
#include <math.h>
#include "Point.hpp"

Point::Point()
{// Default constructor
    px = py =0.0;
}

Point::Point(double x, double y)
{// Initialize using x and y
    px = x;
    py = y;
}


Point::Point(const Point &pc)
{
    px = pc.px;
    py = pc.py;
    
}



Point::~Point()
{// Des...
    cout << "delete point..\n";
}

double Point::X() const
{
    return px;
}

void Point::X(double newX)
{
    px = newX;
}


double Point::Y() const
{
    return py;
}

void Point::Y(double newY)
{
    py = newY;
}

void Point::ToString() const
{
    // Create an output string stream
    std::ostringstream streamObj;
    streamObj << "Point(";
    // Add double to stream
    streamObj << px;
    streamObj << ", ";
    streamObj << py;
    streamObj << ")";
    
    std::string strObj = streamObj.str();
    
    cout << strObj << endl;
}

double Point::Distance() const
{
    double d;
    d = std::sqrt((pow(px,2)+pow (py, 2)));
    return d;
}
double Point::Distance(const Point& pt) const
{
    double d;
    d = std::sqrt((pow((px-pt.px),2)+pow((py-pt.py), 2)));
    return d;
}
