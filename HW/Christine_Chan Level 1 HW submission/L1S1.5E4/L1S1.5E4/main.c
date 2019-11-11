//
//  main.c
//  L1S1.5E4
//
//  Created by Christine Chan on 10/29/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include <stdio.h>

void printnumber(long n)
{
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n/10)
        printnumber(n/10);
    putchar(n%10 + '0');
}
int main(int argc, const char * argv[]) {
    long int n = 12345;
    printnumber(n);
    return 0;
}
