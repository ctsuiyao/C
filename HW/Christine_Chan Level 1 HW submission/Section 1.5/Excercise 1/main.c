//
//  main.c
//  L1S1.5E1
//
//  Created by Christine Chan on 10/29/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include <stdio.h>
int minus(int x, int y)
{
    return x-y;
}

int main() {
    int a, b;
    int diff;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    
    diff = minus(a, b);
    printf("\nDifference between %d and %d is = %d\n",a,b,diff);
    
    return 0;
}
