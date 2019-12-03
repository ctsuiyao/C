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
    Point p1(5.0, 6.0);
    Point p2(2.0, 3.0);
    int f = 3;
    
    Point p3 = p1 - p2;
    p3.ToString();
    cout << "\n";
    
    Point p4 = p1 * f;
    p4.ToString();
    cout << "\n";
    
    Point p5 = p1 + p2;
    p5.ToString();
    cout << "\n";
    
    Point p6(5.0, 6.0);
    if(p1 == p6){
        cout << "p1 is equal to p6\n";
    }else{
        cout << "p1 is not equal to p6\n";
    }
    if(p1 == p2){
        cout << "p1 is equal to p2\n";
    }else{
        cout << "p1 is not equal to p2\n";
    }
    Point p7 = p1;
    p7.ToString();
    
    p1 *= f;
    p1.ToString();
    
    return 0;
}
