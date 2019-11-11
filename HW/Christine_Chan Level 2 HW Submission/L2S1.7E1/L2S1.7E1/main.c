//
//  main.c
//  L2S1.7E1
//
//  Created by Christine on 2019/11/10.
//  Copyright © 2019 Christine. All rights reserved.
//

#include <stdio.h>

// swap function will change the value of the 2 input variables
// input: pointer of the variable
void swap(int* x, int* y)
{
    // declaire a temporary variable to store 1st variable's value
    int z = *x;
    // safe 2nd variable's value to the first pointer
    *x = *y;
    // assign the temp value to the 2nd value's pointer
    *y = z;
}

int main(int argc, const char * argv[]) {
    // declaire the 2 variables
    int x = 123;
    int y = 456;
    
    // print before swap
    printf("Before Swapping\nx = %d\ny = %d\n", x, y);
    
    swap(&x, &y);
    
    // print after swap
    printf("After Swapping\nx = %d\ny = %d\n", x, y);

    return 0;
}
