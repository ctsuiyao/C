//
//  main.cpp
//  L3S2.2E2
//
//  Created by Christine Chan on 11/12/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include <iostream>
#include <string>
#include "Point.hpp"
#include "LineSegment.hpp"
#include "Circle.hpp"


int main(int argc, const char * argv[]) {
    const Point p1(0.0, 0.0);
    const Point p2(3.0, 0.0);
    const LineSegment line(p1, p2);
    const Circle c(p1, line);
    
    Point p(1.0, 1.0);
    if (p==(Point) 1.0) cout<<"Equal!"<<endl;
    else cout<<"Not equal"<<endl;
    
    /*
     It turns out that the Point constructor with the single double argument is implicitly used to convert the number in the if statement to a Point object. Thus constructors are used as implicit conversion operators.*/
    
    
//    cout << p1 << endl;
//    cout << p2 << endl;
//    cout << line << endl;
//    cout << c << endl;
    
    return 0;
}
