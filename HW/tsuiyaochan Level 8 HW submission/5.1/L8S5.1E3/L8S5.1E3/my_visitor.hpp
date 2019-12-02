//
//  my_visitor.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef my_visitor_hpp
#define my_visitor_hpp

#include <boost/variant.hpp>
#include "LineSegment.hpp"
#include "Circle.hpp"
using namespace CHRISTINE::CAD;

class my_visitor : public boost::static_visitor<void>
{
private:
    double m_dx;
    double m_dy;
    
public:
    my_visitor();                                      // Default constructor
    my_visitor(double dx, double dy);                  // Constructor with m_dx and m_dy
    my_visitor(const my_visitor& v);             // Copy constructor
    virtual ~my_visitor();                             // Destructor
    my_visitor& operator = (const my_visitor& s); // Assignment operator
    
    void operator () (Point& p) const;                 // operator () for Point
    void operator () (LineSegment& l) const;                  // operator () for Line
    void operator () (Circle& c) const;                // operator () for Circle
};

#endif /* my_visitor_hpp */
