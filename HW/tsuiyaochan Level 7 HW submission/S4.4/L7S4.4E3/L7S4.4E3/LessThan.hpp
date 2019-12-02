//
//  LessThan.hpp
//  L7S4.4E1
//
//  Created by Christine on 2019/12/1.
//  Copyright © 2019 Christine. All rights reserved.
//

#ifndef LessThan_hpp
#define LessThan_hpp

// The global variable
extern double threshold;

class LessThan
{
private:
    double t;               // Threshold value
    
public:
    LessThan(double value); // Constructor with a threshold value
    ~LessThan();            // Destructor
    
    bool operator () (double val); // Member function
};


// Global function template
template <typename T>
bool less_than(const T& val)
{
    return (val < threshold);
}

#endif /* LessThan_hpp */
