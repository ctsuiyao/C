//
//  Circle.hpp
//  L3S2.2E2
//
//  Created by Christine on 2019/11/12.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include "Point.hpp"
#include "LineSegment.hpp"

using namespace std;
namespace CHRISTINE
{
    namespace CAD
    {

        class Circle
        {
        private:
                
                Point centerPoint;    // center point
                LineSegment m_radius;        // radius

        public:
            // Constructors
            Circle();                                    // Circle with center point at the origin
            Circle(const Point& p, const LineSegment& l);    // Circle with center point p, and radius l
            Circle(const Circle& c);                 // Copy constructor
            virtual ~Circle();                            // Destructor

            // Accesssing functions
            Point CentrePoin() const;
            LineSegment Radius() const;

            // Modifiers
            void CentrePoin(const Point& pt);                    // Set center point p
            void Radius(const LineSegment& l);                        // Set Radius l
            
            // Member functions
            string ToString() const;                    // print out the details of the circle
            friend ostream& operator << (ostream& os, const Circle& c);
            
            double Diameter() const;                        // return the diameter of the circle
            double Area() const;                        // return the area of the circle
            double Circumference() const;                        // return the circumference of the circle
        };
    }

}
#endif /* Circle_hpp */
