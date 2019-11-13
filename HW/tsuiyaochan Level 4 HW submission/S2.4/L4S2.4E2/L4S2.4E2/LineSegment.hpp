//
//  LineSegment.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/12.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef LineSegment_hpp
#define LineSegment_hpp

#include "Point.hpp"
#include <iostream>

using namespace std;

class LineSegment
{
private:
        
        Point startPoint;    // e1
        Point endPoint;        // e2

public:

    // Constructors
    LineSegment();                                    // Line with both end Points at the origin
    LineSegment(const Point& p1, const Point& p2);    // Line with end Points [p1, p2]
    LineSegment(const LineSegment& l);                 // Copy constructor
    virtual ~LineSegment();                            // Destructor

    // Accesssing functions
    Point start() const;
    Point end() const;

    // Modifiers
    void start(const Point& pt);                    // Set Point pt1
    void end(const Point& pt);                        // Set Point pt2
    
    // Member functions
    string ToString() const;                    // print out the details of the line
    
    double Length() const;                        // return the length of the line

};
ostream& operator << (ostream& os, const LineSegment& l);

#endif


