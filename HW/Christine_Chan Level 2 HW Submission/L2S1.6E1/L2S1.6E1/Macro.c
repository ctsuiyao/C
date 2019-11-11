//
//  main.c
//  L2S1.6E1
//
//  Created by Christine on 2019/11/10.
//  Copyright © 2019 Christine. All rights reserved.
//

#include <stdio.h>
// include the header file
#include "Defs.h"

int main() {
    // declaire variable a and b
    int a=1;
    int b=2;
    // invoke print macro defined in Defs.h header file
    PRINT1("%d\n", a);
    PRINT2("%d %d\n", a, b);
    
    return 0;
}
