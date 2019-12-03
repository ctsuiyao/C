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
#include "LineSegment.hpp"
#include "Circle.hpp"
//#include "Array.cpp" // Can #include "Array.hpp" instead if "Array.cpp" is included in "Array.hpp"

#include "NumericArray.hpp"
using namespace CHRISTINE::CAD;
using namespace CHRISTINE::Containers;


int main(int argc, const char * argv[]) {
    // Create numeric arrays
    NumericArray<int> iArr1;                 // Default constructor
    NumericArray<int> iArr2(3);             // Constructor with array size
    NumericArray<int> iArr3(iArr2);          // Copy constructor
    
    
    // Check if DefaultSize() == Size(); and size of 2nd array
    cout << "Default size of iArr1: " << iArr1.DefaultSize() << endl;   // Default constructor
    cout << "Size of iArr1: " << iArr1.Size() << "\n";
    cout << "Size of iArr2: " << iArr2.Size() << "\n";                  // Constructor with array size
    cout << "Size of iArr3: " << iArr3.Size() << "\n\n";                // Copy constructor
    
    iArr2[0] = 11;
    iArr2[1] = 12;
    iArr2[2] = 13;
    
    // Test assignment operator.
    NumericArray<int> iArr4 = iArr2;
    cout << "\nNumericArray4: " << endl;
    for (int i = 0; i < iArr4.Size(); i++)
    {
        cout << iArr4[i] << endl;
    }
    
    // Test operator *
    cout << "\nTesting operator * ()..." << endl;
    iArr3 = iArr2 * 6 ;                     // Switch order of operand
    
    cout << "iArr2[i] * 6" << endl;
    for (int i=0; i<iArr3.Size(); i++)
    {
        cout << iArr3[i] << endl;
    }
    
    // Test operator *
    cout << "\nTesting operator + ()..." << endl;
    iArr4 = iArr2 + iArr3 ;                     // Switch order of operand
    
    cout << "iArr4[i]: " << endl;
    for (int i=0; i<iArr4.Size(); i++)
    {
        cout << iArr4[i] << endl;
    }
    
    
    // Test mismatch length error message
    cout << "\nTesting error message..." << endl;
    NumericArray<int> iArr5;
    
    cout << "NumericArray5: " << endl;

    try
    {
        iArr5 = iArr1 + iArr3;
    }
    catch (ArrayException& ex)
    {
        cout << ex.GetMessage() << endl;
    }
    
    
    // Test DotProduct()
    cout << "Testing DotProduct()..." << endl;
    int dot_prod = iArr2.DotProduct(iArr3);  // Take dot product of intArray2 and intArray3
    cout << "Dot product of iArr2 and iArr3: " << dot_prod << endl << endl;
    
    return 0;
}
