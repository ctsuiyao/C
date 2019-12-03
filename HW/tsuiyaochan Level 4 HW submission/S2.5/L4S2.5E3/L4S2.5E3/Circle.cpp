//
//  Circle.cpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/12.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include "Point.hpp"
#include "LineSegment.hpp"
#include "Circle.hpp"
#define _USE_MATH_DEFINES
#define M_PI      3.14159265358979323846
#include <cmath>
#include <sstream>

Circle::Circle()
{
    
}

Circle::~Circle()
{
    
}

Circle::Circle(const Point& p, const LineSegment& l)
{
    centerPoint=p;
    m_radius=l;
}
Circle::Circle(const Circle& l)
{
    centerPoint=l.centerPoint;
    m_radius=l.m_radius;
}

Point Circle::CentrePoin() const
{
    return centerPoint;
}

LineSegment Circle::Radius() const
{
    return m_radius;
}

void Circle::CentrePoin(const Point& pt)
{
    centerPoint=pt;
}

void Circle::Radius(const LineSegment& l)
{
    m_radius=l;
}

string Circle::ToString() const
{
    // Create an output string stream
    std::ostringstream streamObj;
    streamObj << "This Cirt has a center point: Point(";
    // Add double to stream
    streamObj << centerPoint.X();
    streamObj << ", ";
    streamObj << centerPoint.Y();
    streamObj << ") and radius: ";
    // Add double to stream
    streamObj << m_radius.Length();
    streamObj << ". \n";
    streamObj << "With Diameter: ";
    streamObj << Diameter() ;
    streamObj << "\nWith Area: ";
    streamObj << Area() ;
    streamObj << "\nWith Circumference: ";
    streamObj << Circumference() ;
    
    std::string strObj = streamObj.str();
    
    return strObj;
}

double Circle::Diameter() const
{
    double d = m_radius.Length() * 2.0;
    return d;
}
double Circle::Area() const
{
    double a = M_PI * pow(m_radius.Length(), 2.0);
    return a;
}
double Circle::Circumference() const
{
    double c = 2.0 * M_PI * m_radius.Length();
    return c;
}

ostream& operator << (ostream& os, const Circle& c)
{ // Print the complex number
    os << c.ToString() << "\n";
    return os;
}
