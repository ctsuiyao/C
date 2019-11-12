//
//  Point.hpp
//  L3S2.2E1
//
//  Created by Christine on 2019/11/12.
//  Copyright © 2019 Christine. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

#include <iostream>
using namespace std;

class Point
{
private:
  double px;
  double py;

public:
    // Constructors
    Point();                                // Default constructor
    Point(double xval, double yval);        // Initialize with x and y value
    
    ~Point();
    // Accessing functions
    double GetX() const;                      // The x-coordinate
    double GetY() const;                      // The y-coordinate
    void SetX(double x);
    void SetY(double x);
    std::string ToString();
};

#endif /* Point_hpp */
