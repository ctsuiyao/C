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
    // Create a stack objects
    Stack<int> stack_obj;
    
    
    // Catch Stack Full Exception
    try
    {
        cout << "Stack Full Exception..." << endl;
        for (int i = 0; i < 100; i++)         // 12 is default size of the array in stack_obj
        {
            stack_obj.Push(i);
        }
    }
    catch (StackException& ex)                // Catch exception object
    {
        cout << ex.GetMessage() << endl;      // Print the error message
    }
    catch(...)
    {
        cout << "An unhandled exception has occurred..." << endl;
    }
    
    // Catch Stack Empty Exception
    try
    {
        cout << "Stack Empty Exception..." << endl;
        for (int i = 0; i < 100; i++)         // 12 is default size of the array in stack_obj
        {
            stack_obj.Pop();
        }
        
    }
    catch (StackException& ex)                // Catch exception object
    {
        cout << ex.GetMessage() << endl;      // Print the error message
    }
    catch(...)
    {
        cout << "An unhandled exception has occurred..." << endl;
    }
    
    return 0;
}
