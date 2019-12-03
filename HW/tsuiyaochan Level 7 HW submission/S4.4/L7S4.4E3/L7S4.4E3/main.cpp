//
//  main.cpp
//  L7S4.4E1
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine. All rights reserved.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include "LessThan.hpp"
using namespace std;

double threshold = 3.0;

int main() {
    vector<double> v(5);
    for (int i = 0; i < v.size(); ++i)
    {
        v[i] = i + 1.0; // 1.0, 2.0, 3.0, 4.0, 5.0
    }
    
    // Use the global function less_than
    cout << "Global function: number of number smaller than " << threshold << ": " << endl;
    cout << count_if(v.begin(), v.end(), less_than<double>) << endl;
    
    // Use the class LessThan
    cout << "Function object: number of elements smaller than " << threshold << ": " << endl;
    cout << count_if(v.begin(), v.end(), LessThan(threshold)) << endl;
    return 0;
}
