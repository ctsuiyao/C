//
//  Circle.hpp
//  Exercise 1
//
//  Created by Changheng Chen on 1/6/17.
//  Copyright © 2017 Changheng Chen. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "Point.hpp"

class Circle
{
private:
    // Data members
    Point m_center;                              // Center point of circle
    double m_radius;                             // Radius of circle
    
public:
    // Member functions
    
    // Constructors and destructor
    Circle();                                    // Default constructor
    Circle(Point m_center, double m_radius);     // Constructor
    Circle(const Circle& c);                     // Copy constructor
    Circle& operator = (const Circle& source);   // Assignment operator
    ~Circle();                                   // Destructor
    
    // Circle characteristics functions
    Point CenterPoint() const;                   // Getter: Center point of circle
    double Radius() const;                       // Getter: Radius of circle
    void CenterPoint(const Point& new_m_center); // Setter: Center point of circle
    void Radius(double new_m_radius);            // Setter: Radius of circle
    
    double Diameter() const;                     // Diameter of circle
    double Area() const;                         // Area of circle
    double Circumference() const;                // Circumference of circle
    string ToString() const;                     // String description function
};

#endif /* Circle_hpp */
