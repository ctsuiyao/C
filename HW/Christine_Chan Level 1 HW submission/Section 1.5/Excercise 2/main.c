//
//  main.c
//  L1S1.5E2
//
//  Created by Christine Chan on 10/29/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include <stdio.h>

long int factorial(int n){
    if(n>=1){
        return n*factorial(n-1);
    }else{
        return 1;
    }
}

int main(int argc, const char * argv[]) {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Factorial of %d = %ld\n", a, factorial(a));
    return 0;
}
