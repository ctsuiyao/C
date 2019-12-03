//
//  my_visitor.cpp
//  L3S2.2E2
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include "my_visitor.hpp"
my_visitor::my_visitor() : m_dx(1.0), m_dy(2.0)
{
}

my_visitor::my_visitor(double dx, double dy) : m_dx(dx), m_dy(dy)
{
}

my_visitor::my_visitor(const my_visitor& visitor) : m_dx(visitor.m_dx), m_dy(visitor.m_dy)
{
}

my_visitor::~my_visitor()
{
}
// Assignment operator
my_visitor& my_visitor::operator = (const my_visitor &source)
{
    
    if (this == &source)
        return *this;
    
    m_dx = source.m_dx;
    m_dy = source.m_dy;
    
    return *this;
}



void my_visitor::operator () (Point& p) const
{
    p.X(p.X() + m_dx);
    p.Y(p.Y() + m_dy);
}

void my_visitor::operator () (LineSegment& l) const
{
    l.start(Point((l.start()).X() + m_dx, (l.start()).Y() + m_dy));
    l.end(Point((l.end()).X() + m_dx, (l.end()).Y() + m_dy));
}

void my_visitor::operator () (Circle& c) const
{
    c.CentrePoin(Point(c.CentrePoin().X() + m_dx, c.CentrePoin().Y() + m_dy));
}
