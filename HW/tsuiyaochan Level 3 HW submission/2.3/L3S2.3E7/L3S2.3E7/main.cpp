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
    cout << "Please enter X axis: ";
    cin >> i;
    cout << "Please enter Y axis: ";
    cin >> j;
    
    Point p1(i, j);
    p1.ToString();
    return 0;
}
