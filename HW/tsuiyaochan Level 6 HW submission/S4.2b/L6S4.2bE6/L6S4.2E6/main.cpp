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
#include "PointArray.hpp"
#include "Stack.hpp"
using namespace CHRISTINE::CAD;
using namespace CHRISTINE::Containers;


int main(int argc, const char * argv[]) {
    /* "Only stacks with the same size template argument can be copied/assigned." */
    
    // Create stack objects for tests
    Stack<int,3> stack_obj1;                // Stack of integers of size 10
    Stack<int,3> stack_obj2;                // Stack of integers of size 10
    Stack<int,6> stack_obj3;                // Stack of integers of size 12

    // Push elements into stack_obj1 and try to assign it to stack_obj2 and stack_obj3
    for (int i = 0; i < 3; i++)
        stack_obj1.Push(i);
    
    try
    {
        stack_obj2 = stack_obj1;
    }
    catch(ArrayException& ex)
    {
        cout << ex.GetMessage() << endl;
    }
//
//    try
//    {
//        stack_obj3 = stack_obj1;
//    }
//    catch(ArrayException& ex)
//    {
//        cout << ex.GetMessage() << endl;
//    }
    
    cout << "all works out." << endl;

    
    return 0;
}
