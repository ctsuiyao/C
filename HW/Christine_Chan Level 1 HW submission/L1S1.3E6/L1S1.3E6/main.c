//
//  main.c
//  L1S1.3E6
//
//  Created by Christine on 2019/8/26.
//  Copyright © 2019 Christine. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    signed int x1 = -5;
    signed int x2;
    printf("intput: %d\n", x1);
    x2 = x1 >> 2;
    printf("shifted: %d\n", x2);
    
    if (x1<0){
        if(x2<0){
            printf("Arithmetic Rifght shift was performed\n");
        }else{
            printf("Logical Rifght shift was performed\n");
        }
    }else{
        printf("Arithmetic Right shift was performed\n");
    }
}
