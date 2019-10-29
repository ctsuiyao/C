//
//  main.c
//  L1S1.4E5
//
//  Created by Christine Chan on 10/29/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    float f = 0;
    int i;
    
    printf("Celsius, Fahrenheit\n");
    
    for(i=0; i<20; i++){
        f = (i*9/5) + 32;
        printf("%10.1d, %7.1f\n", i, f);
    }
    
    return 0;
}
