//
//  main.c
//  L2S1.7E3
//
//  Created by Christine on 2019/11/10.
//  Copyright © 2019 Christine. All rights reserved.
//

/* Predict what will be printed on the screen */
#include <stdio.h>
#define PRD(a) printf("%d", (a) ) // Print decimal
#define NL printf("\n"); // Print new line
// Create and initialse array
int a[]={0, 1, 2, 3, 4};
int main()
{
    int i;
    int* p;
    for (i=0; i<=4; i++) PRD(a[i]); // 1: print each value in the array - 01234
    NL; // print a new line
    for (p=&a[0]; p<=&a[4]; p++) PRD(*p); // 2. loop through array's reference to print the value - 01234
    NL; // print a new line
    NL; // print a new line
    for (p=&a[0], i=0; i<=4; i++) PRD(p[i]); // 3. given p the address of first value in the array, and loop through - 01234
    NL; // print a new line
    for (p=a, i=0; p+i<=a+4; p++, i++) PRD(*(p+i)); // 4 - 024
    NL; // print a new line
    NL; // print a new line
    for (p=a+4; p>=a; p--) PRD(*p); // 5 - 43210
    NL; // print a new line
    for (p=a+4, i=0; i<=4; i++) PRD(p[-i]); // 6 - 43210
    NL; // print a new line
    for (p=a+4; p>=a; p--) PRD(a[p-a]); // 7 - 43210
    NL; // print a new line
    return 0;
}
