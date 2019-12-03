//
//  main.cpp
//  L3S2.2E2
//
//  Created by Christine Chan on 11/12/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include <iostream>
#include "my_visitor.hpp"
#include "ShapeVariantGenerator.hpp"

int main() {
    try
    {
        // Create Shape with user input and print it
        ShapeType my_shape = ShapeVariant(); // Caution! An exception may be thrown.
        cout << "\nShape is successfully created: " << my_shape << endl;
    
        // Try to get the value out of the variant and assign it to Line
        LineSegment l;
        try
        {
            l = boost::get<LineSegment>(my_shape);  // Assign the variant to a Line object
        }
        catch (boost::bad_get& err)          // Catch it if types do not match
        {
            cout << "\nShape mismatch error: " << err.what() << endl;
        }
        
        // Apply my_visitor to my_shape, and check if coordinates are different
        my_visitor visitor(3.0, 4.0);        // Constructor with m_dx and m_dy
        cout << "\nShape before moving: " << my_shape << endl;
        boost::apply_visitor(visitor, my_shape);
        cout << "\nShape after moving: " << my_shape << endl;
    }
    
    catch (WrongShapeException& ex)          // Catch it if shape does not exist
    {
        cout << ex.GetMessage() << endl << endl;
    }
    catch(...)
    {
        cout << "An unhandled exception has occurred..." << endl;
    }
    return 0;
}
