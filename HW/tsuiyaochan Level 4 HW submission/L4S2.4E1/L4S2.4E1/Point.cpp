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
    cout << "this is the default constructor\n";
    px = py =0.0;
}

Point::Point(double x, double y)
{// Initialize using x and y
    cout << "this is the parameterized constructor\n";
    px = x;
    py = y;
}


Point::Point(const Point &pc)
{
    cout << "this is a copy constructor\n";
    px = pc.px;
    py = pc.py;
    
}



Point::~Point()
{// Des...
    cout << "this is the deconstructor\n";
    cout << "delete point..\n";
}


Point operator * (double factor) const; // Scale the coordinates.
Point operator + (const Point& p) const; // Add coordinates.
bool operator == (const Point& p) const; // Equally compare operator.
Point& operator *= (double factor);


// Negate the coordinates.
Point Point::operator - (const Point& pt) const
{ // Subtract two Coordinates
    return Complex(px - pt.x, py - pt.y);
}

Point operator * (double factor) const; 


// Assignment operator.
Point& Point::operator = (const Point& p)
{
    // Avoid doing assign to myself
    if (this == &p)
        return *this;

    px = p.x;
    py = p.y;

    return *this;
}

Complex& Complex::operator += (const Complex& c)
{
        x += c.x;
        y += c.y;

        return *this;
}

Complex& Complex::operator -= (const Complex& c)
{
        x -= c.x;
        y -= c.y;

        return *this;
}


Complex& Complex::operator *= (const Complex& c) // Scale the coordinates & assign
{

    Complex tmp = (*this) * c;
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
