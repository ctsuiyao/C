//
//  main.c
//  L1S1.3E8
//
//  Created by Christine on 2019/8/27.
//  Copyright © 2019 Christine. All rights reserved.
//
#include <stdio.h>
int main()
{
    int x=2;
    int y;
    int z;
    x*=3+2;
    printf("x=%d\n", x); // x=10
    x*=y=z=4;
    printf("x=%d\n", x); // x=40
    x=y==z;
    printf("x=%d\n", x); // x=1
    return 0;
}
