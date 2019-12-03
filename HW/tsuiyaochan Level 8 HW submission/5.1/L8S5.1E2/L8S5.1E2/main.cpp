//
//  main.cpp
//  L8S5.1E2
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine. All rights reserved.
//

#include <boost/tuple/tuple.hpp>    // Tuple class
#include <boost/tuple/tuple_io.hpp> // I/O for tuples
#include <string>
#include <iostream>
using namespace std;

// Function to print Person
void print(const boost::tuple<string, int, double>& s)
{
    cout << "Name: " << s.get<0>() << "; Age: " <<
    s.get<1>() << "; Height: " << s.get<2>() << endl;
}

int main() {
    using boost::tuple;
    
    // Typedef for a Person tuple that contains a name, age and height
    typedef tuple<string, int, double> Person;

    // Create a few person tuple instances
    Person person1 = boost::make_tuple(string("christine"), 30, 5.5);
    Person person2 = boost::make_tuple(string("jeremy"), 30, 5.9);
    
    // Print persons
    print(person1);
    print(person2);
    
    // Increment the age of the 1st element in persons
    cout << "Before age change: " << person1 << endl;
    person1.get<1>() += 1;
    cout << "After age change:  " << person1 << endl;
    return 0;
}
