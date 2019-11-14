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
#include "ArrayC.hpp"


int main(int argc, const char * argv[]) {
    cout << "Creating an array size of 2" << endl;
    ArrayC* c_arr = new ArrayC(2);
    Point p1(1.0, 1.0);
    Point p2(2.0, 2.0);
     
    (*c_arr).SetElement(0, p1);
    (*c_arr).SetElement(1, p2);
     
    cout << "Size of array: " << (*c_arr).Size() << endl;
    cout << "First Point is: " << (*c_arr).GetElement(0) << endl;
     
    return 0;
}
