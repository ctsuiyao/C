//
//  Circle.cpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/12.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include "Circle.hpp"
#define _USE_MATH_DEFINES
#define M_PI      3.14159265358979323846
#include <cmath>
#include <sstream>

namespace CHRISTINE
{
    namespace CAD
    {
            Circle::Circle() : Shape(), centerPoint(), m_radius()
            {
                
            }

            Circle::~Circle()
            {
                cout << "Circle destructor called." << endl;
            }

            Circle::Circle(const Point& p, const LineSegment& l) : Shape(), centerPoint(p), m_radius(l){}
    
            Circle::Circle(const Circle& l) : Shape(), centerPoint(l.centerPoint), m_radius(l.m_radius){}

            Circle& Circle::operator = (const Circle& c)
            { // Assignment operator
                
                if (this == &c)
                    return *this;
                
                Shape::operator = (c);
                
                centerPoint = c.centerPoint;
                m_radius = c.m_radius;
                
                return *this;
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
                stringstream stream;
                std::string s = Shape::ToString();

                stream << "Center: " << centerPoint.ToString() << ", Radius: " << m_radius << ", " << s;

                return stream.str();
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
                os << "center: " << c.centerPoint << "\nradius: " << c.m_radius << "\n";
                return os;
            }
        
            void Circle::Draw() const
            {
                cout << "Drawing circle..." << endl;
            }
    }
}
