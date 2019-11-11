//
//  main.c
//  l1s1.3e2
//
//  Created by Christine Chan on 8/26/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
// Write a program that calculates the surface of a triangle with one 90 degree angle. The
// formula is half the height multiplied by the base. The program should take an input from
// the user (base & height), and output the result.


#include <stdio.h>

int triangle_surface(int base, int height) {
    int surface;
    if( ( base == 0 ) || (height == 0) ){
        surface =  0;
    }else{
        surface = base*height/2;
    }
    return surface;
}
int main() {
    
    int base = 10;
    int height = 20;
    int ans;
    
    ans = triangle_surface(base, height);
    
    printf("%d\n", ans);
    
    return 0;
}
