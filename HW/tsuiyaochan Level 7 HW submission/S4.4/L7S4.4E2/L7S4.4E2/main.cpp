//
//  main.cpp
//  L7S4.4E1
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine. All rights reserved.
//

#include "SumContainers.hpp"
#include <iostream>

int main() {
    vector<double> v;                // Create vector
    list<double> l;                  // Create list
    map<const string, double> number; // Create map


    // Add elements to vector, list, and map
    for (int i = 0; i < 3; ++i)
    {
         v.push_back(i+1);              // 1.0, 2.0, 3.0
         l.push_front(i*2);           // 4.0, 2.0, 0.0
    }

    number["First"] = 10;
    number["Second"] = 20;
    number["Third"] = 30;


    // Sum all elements in vector, list, and map
    cout << "Sum of vector v: " << Sum(v) << endl;        // 1.0 + 3.0 + 3.0 = 6.0
    cout << "Sum of list l: " << Sum(l) << endl;          // 0.0 + 2.0 + 4.0 = 6.0
    cout << "Sum of map number: " << Sum(number) << endl;   // 10.0 + 20.0 + 30.0 = 60.0
    cout << endl;


    // Sum elements within a range in vector, list, and map
    vector<double>::const_iterator vstart = v.begin()+1;  // Increment 1 element from begin()
    vector<double>::const_iterator vend = v.end();
    cout << "Sum of elements in v except the 1st one: "
      << Sum(vstart, vend) << endl;                    // 2.0 + 3.0 = 5.0

    list<double>::const_iterator lstart = l.begin();
    list<double>::const_iterator lend = --l.end();        // Retreat 1 element from end()
    cout << "Sum of elements in l except the last one: "
      << Sum(lstart, lend) << endl;                    // 4.0 + 2.0 = 6.0

    map<const string, double>::const_iterator
                            mstart = ++number.begin();  // Increment 1 element from begin()
    map<const string, double>::const_iterator
                            mend = --number.end();      // Retreat 1 element from end()
    cout << "Sum of elements in score excluding the 1st and last ones: "
      << Sum(mstart, mend) << endl;                    // 20.0
    return 0;
}
