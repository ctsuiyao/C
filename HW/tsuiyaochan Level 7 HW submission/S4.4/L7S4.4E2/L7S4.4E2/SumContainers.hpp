//
//  SumContainers.hpp
//  L7S4.4E1
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine. All rights reserved.
//

#ifndef SumContainers_hpp
#define SumContainers_hpp

#include <vector>
#include <list>
#include <map>
#include <string>
using namespace std;


// Sum of the elements in a container
template <typename T>
double Sum(const T& s)
{
    double sum = 0.0;
    
    typename T::const_iterator i;
    typename T::const_iterator end = s.end();
    
    for (i = s.begin(); i != end; ++i)
        sum += *i;
    
    return sum;
}

// Sum of the elements in a map
template <>
double Sum(const map<const string, double>& s)
{
    double sum = 0.0;
    
    map<const string, double>::const_iterator i;
    map<const string, double>::const_iterator end = s.end();
    
    for (i = s.begin(); i != end; ++i)
        sum += i->second;
    
    return sum;
}



// Sum between two iterators in a container
template <typename T>
double Sum(const T& start, const T& end)
{
    double sum = 0.0;
    
    for (T i = start; i != end; ++i)
        sum += *i;
    
    return sum;
}


// Sum between two iterators in a map
template <>
double Sum(const map<const string, double>::const_iterator& start, const map<const string, double>::const_iterator& end)
{
    double sum = 0.0;
    
    map<const string, double>::const_iterator i;
    
    for (i = start; i != end; ++i)
        sum += i->second;
    
    return sum;
}
#endif /* SumContainers_hpp */

