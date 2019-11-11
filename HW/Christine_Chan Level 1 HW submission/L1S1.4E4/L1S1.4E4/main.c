//
//  main.c
//  L1S1.4E4
//
//  Created by Christine Chan on 10/9/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float f = 0;
    int step = 20;
    float c = 0;
    
    printf("Fahrenheit, Celsius\n");
    
    while(f<300){
        c = (f - 32)*5/9;
        printf("%10.1f, %7.1f\n", f, c);
        f += step;
    }
    
    return 0;
}
