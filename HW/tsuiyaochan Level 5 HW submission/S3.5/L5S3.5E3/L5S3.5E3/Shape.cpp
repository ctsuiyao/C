//
//  Shape.cpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/24.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include "Shape.hpp"
#include <stdlib.h>       // rand()
#include <sstream>

// Default constructor
Shape::Shape() : id(rand())
{
//    cout << "shape constructor" << endl;
}

// Copy constructor
Shape:: Shape(const Shape& s) : id(s.id)
{
//    cout << "shape copy constructor" << endl;
}
Shape::~Shape() {
    cout << "shape destructor called." << endl;
}
// Operator overloading
Shape& Shape::operator = (const Shape& s)
{// Assignment operator
    if (this == &s)
    {
        return *this;
    }

    id = s.id;

    return *this;
}

string Shape::ToString() const
{
    stringstream stream;

    stream << "ID: " << id;

    return stream.str();
}

// Accessing functions
int Shape::ID() const
{
    return id;
}
