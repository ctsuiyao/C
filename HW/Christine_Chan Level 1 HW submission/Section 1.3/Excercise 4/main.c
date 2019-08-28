//
//  main.c
//  L1S1.3E4
//
//  Created by Christine Chan on 8/26/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//  Create a C-program that uses the fact that 0 (zero) is interpreted as FALSE and non-zero
//  is interpreted as TRUE. The C-program can be made easier to read when this 0 (or non-zero) is assigned to a variable e.g. an int called married. Use the ?: operator to print if someone is married or not. (See if you can use a single printf)

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int married = 0;
    printf("%s\n", married ? "TRUE" : "FALSE");
    return 0;
}
