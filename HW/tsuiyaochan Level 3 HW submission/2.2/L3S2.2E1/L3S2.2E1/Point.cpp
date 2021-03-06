//
//  Point.cpp
//  L3S2.2E1
//
//  Created by Christine on 2019/11/12.
//  Copyright © 2019 Christine. All rights reserved.
//
#include <sstream>
#include "Point.hpp"

Point::Point()
{// Default constructor
    px = py =0.0;
}

Point::Point(double x, double y)
{// Initialize using newx and newy
    px = x;
    py = y;
}

Point::~Point()
{// Des...
    cout << "delete point..\n";
}

// Point member function
double Point::GetX() const
{
    return px;
}

// Point member function
double Point::GetY() const
{
    return py;
}

void Point::SetX(double x)
{
    px = x;
}

void Point::SetY(double y)
{
    py = y;
}

void Point::ToString()
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
