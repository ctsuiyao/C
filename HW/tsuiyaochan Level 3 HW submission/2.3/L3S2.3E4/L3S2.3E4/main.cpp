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


int main(int argc, const char * argv[]) {
    double i, j;
//    cout << "Please enter X axis: ";
//    cin >> i;
//    cout << "Please enter Y axis: ";
//    cin >> j;
    const Point cp(1.5, 3.9);
    cout<<cp.X()<<endl;
    
    Point p1(1.5, 3.9);
    cout << "Distance between ";
    p1.ToString();
    cout << "and Origin is: " << p1.Distance() << "\n" << endl;
    
    i = 2.3;
    j = 2.7;
    
    Point p2(i, j);
    cout << "Distance between ";
    p1.ToString();
    cout << "and";
    p2.ToString();
    cout << "is: " << p1.Distance(p2) << "\n" << endl;

    return 0;
}
// 1. Run the program and count how many times the constructor and destructor are called. Are they the same?
// No, they are not the same. constructor being called twice whereas deconsturctor 3 times.

// 2. adding in the copy constructor, the times of constructor and deconstructor being called are same
