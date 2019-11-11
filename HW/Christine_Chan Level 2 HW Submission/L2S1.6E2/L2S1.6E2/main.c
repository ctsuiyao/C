//
//  main.c
//  L2S1.6E2
//
//  Created by Christine on 2019/11/10.
//  Copyright © 2019 Christine. All rights reserved.
//

#include <stdio.h>
// include the header file
#include "Defs.h"

int main() {
    // declaire 3 variables
    int a = 10;
    int b = 20;
    int c = 40;
    // invoke the macros and print it out
    printf("%d\n", MAX2(a, b));
    printf("%d\n", MAX3(a, b, c));
    return 0;
}

