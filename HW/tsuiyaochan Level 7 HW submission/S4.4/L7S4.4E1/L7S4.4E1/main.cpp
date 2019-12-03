//
//  main.cpp
//  L7S4.4E1
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine. All rights reserved.
//

#include <iomanip>
#include <iostream>
#include <list>
#include <vector>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
    // Create a list of doubles and add some data.
    list<double> l; // Create list

    l.push_front(1);   // Add element: 1
    l.push_back(2);    // Add element: 1, 2
    l.push_back(3);    // Add element: 1, 2, 3

    cout << "First element: " << l.front() << endl; // Access 1st element: 1
    cout << "Last element: "  << l.back()  << endl; // Access 2nd element: 3
    cout << endl;



    // Create a vector of doubles and add some data
    vector<double> v;
    cout << "v size:  " << v.size() << "  capacity:  " << v.capacity() << endl;
    for (int i = 0; i < 16; ++i)  // Check the growth of vector
    {
      v.push_back(i);
      cout << "v[" << i << "]=" << v[i] << ";  v size: " << v.size() << ";  capacity: " << v.capacity() << endl;
    }



    // Create a map that maps strings to doubles.
    map<const char*, double> number;
    map<const char*, double>::iterator iterator;

    number["First"] = 10.0;  // Add element
    number["Second"] = 20.0;  // Add element
    number["Third"] = 30.0;  // Add element

    // Get number
    cout << "\nFirst Number: " << number["First"] << endl;

    return 0;
}
