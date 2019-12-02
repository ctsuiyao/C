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
    // Create stack objects
    Stack<int> stack1;                    // Default constructor with default array size 12
    Stack<int> stack2(3);                 // Stack of integers of size 3
    
    
    // Push elements into the stacks
    for (int i = 0; i < 3; i++)
        stack2.Push(i);

    
    // Pop elements from the stacks
    cout << "stack2: " << endl; // Display popped out elements, should be the same
    for (int i = 0; i < 3; i++)
    {
        cout << stack2.Pop() << endl;
    }
    cout << endl;
    
    // Catch Out of Bound Exception with using Push()
    try
    {
        cout << "push to stack2 untill 1000" << endl;
        for (int i = 0; i < 1000; i++)        // 12 is default size of the array in stack_obj1
        {
            stack2.Push(i);
            cout << i << endl;
        }
    }
    catch (ArrayException& ex)                // Catch exception object
    {
        cout << ex.GetMessage() << endl;      // Print the error message
    }
    catch(...)
    {
        cout << "An unhandled exception has occurred..." << endl;
    }
    cout << endl;

    // Catch Out of Bound Exception with using Pop()
    try
    {
        cout << "Pop stack2 untill 100" << endl;
        for (int i = 0; i < 100; i++)
        {
            stack2.Pop();
            cout << i << endl;
        }
        
    }
    catch (ArrayException& ex)                // Catch exception object
    {
        cout << ex.GetMessage() << endl;      // Print the error message
    }
    catch(...)
    {
        cout << "An unhandled exception has occurred..." << endl;
    }
    return 0;
}
