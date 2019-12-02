//
//  LineSegment.cpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/12.
//  Copyright © 2019 Christine Chan. All rights reserved.
//


#include "LineSegment.hpp"
#include <cmath>
#include <sstream>


namespace CHRISTINE {
    namespace CAD {

        LineSegment::LineSegment() : Shape(), startPoint(), endPoint() {}

        LineSegment::~LineSegment() {}

        LineSegment::LineSegment(const Point& p1, const Point& p2)  : Shape(), startPoint(p1), endPoint(p2){}

        LineSegment::LineSegment(const LineSegment& l)  : Shape(l), startPoint(l.startPoint), endPoint(l.endPoint){};

        Point LineSegment::start() const
        {
            return startPoint;
        }

        Point LineSegment::end() const
        {
            return endPoint;
        }

        void LineSegment::start(const Point& pt)
        {
            startPoint=pt;
        }

        void LineSegment::end(const Point& pt)
        {
            endPoint=pt;
        }

        string LineSegment::ToString() const
        {
            // Create an output string stream
            std::ostringstream streamObj;
            streamObj << "This line has a start point: Point(";
            // Add double to stream
            streamObj << startPoint.X();
            streamObj << ", ";
            streamObj << startPoint.Y();
            streamObj << ") and end point: Point(";
            // Add double to stream
            streamObj << endPoint.X();
            streamObj << ", ";
            streamObj << endPoint.Y();
            streamObj << ")";
            
            std::string strObj = streamObj.str();
            
            return strObj;
        }

        double LineSegment::Length() const
        {
            double d = startPoint.Distance(endPoint);
            return d;
        }
        
        LineSegment& LineSegment::operator = (const LineSegment& l)
        { // Assignment operator
            
            if (this == &l)
                return *this;
            
            Shape::operator = (l);
            
            startPoint = l.startPoint;
            endPoint = l.endPoint;
            
            return *this;
        }
    
        ostream& operator << (ostream& os, const LineSegment& l)
        { // Print the complex number
            os << "Line:" << l.startPoint << "-" << l.endPoint << "\n" << endl;
            return os;
        }
    }
}
