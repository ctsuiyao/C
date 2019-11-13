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

Point::Point(double x)
{// Initialize using x
    px = x;
    py = x;
}


Point::Point(const Point &pc)
{
    px = pc.px;
    py = pc.py;
    
}



Point::~Point()
{// Des...
}

// Negate the coordinates.
Point Point::operator - (const Point& pt) const
{
    return Point(px - pt.px, py - pt.py);
}

// Scale the coordinates.
Point Point::operator * (double factor) const
{
    return Point(px*factor, py*factor);
}

// Add coordinates.
Point Point::operator + (const Point& p) const
{
    return Point(px + p.px, py + p.py);
}


// Assignment operator.
Point& Point::operator = (const Point& p)
{
    // Avoid doing assign to myself
    if (this == &p)
        return *this;
    
    px = p.px;
    py = p.py;
    
    return *this;
}
// Equally compare operator.
bool Point::operator == (const Point& p) const
{
    if((px==p.px)&&(py==p.py)){
        return true;
    }else{
        return false;
    }
}

Point& Point::operator *= (double factor) // Scale the coordinates & assign
{
    
    Point tmp = (*this) * factor;
    *this = tmp;
    
    return *this;
    
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

string Point::ToString() const
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
    
    return strObj;
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
ostream& operator << (ostream& os, const Point& p)
{ // Print the complex number
    os << p.ToString() << "\n";
    return os;
}
