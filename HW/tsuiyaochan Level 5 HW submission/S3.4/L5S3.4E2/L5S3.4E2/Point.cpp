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

namespace CHRISTINE {
    namespace CAD {

        Point::Point() : Shape(), px(0.0), py(0.0)
        {
//            cout << "point constructor" << endl;
        }
        
        Point::Point(double x) : Shape(), px(x), py(x)
        {
//            cout << "point with 1 value" << endl;
        }
    
        Point::Point(double x, double y) : Shape(), px(x), py(y)
        {
//            cout << "point with 2 value" << endl;
        }

        Point::Point(const Point &pc) : Shape(pc), px(pc.px), py(pc.py)
        {
//            cout << "point copy constructor" << endl;
        }

        Point::~Point(){}

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
            //cout << "this is the assignment calls." << endl;
            // Avoid doing assign to myself
            if (this == &p)
                return *this;

            Shape::operator = (p);
            
            px = p.px;
            py = p.py;
            
            return *this;
        }
    
        // Equally compare operator.
        bool Point::operator == (const Point& p) const
        {
            return ((px==p.px)&&(py==p.py));
        }
                             
        Point& Point::operator *= (double factor) // Scale the coordinates & assign
        {
            px *= factor;
            py *= factor;
            
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
            os << "Point(" << p.px << "," << p.py << ")";
            return os;
        }
    }
}
