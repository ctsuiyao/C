//
//  main.c
//  L2S1.9E1
//
//  Created by Christine on 2019/11/11.
//  Copyright © 2019 Christine. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Create a C-program that reads the characters from the keyboard and shows them on screen
    // (the inputted characters should only be displayed when the user hits 'enter',
    // line by line).
    //When ^A is entered, the program must end properly. T
    // hen the following message will appear: “CTRL + A is a correct ending.”
    // Tip: getchar() reads and putchar() writes the type int. The value of ^A is 1.
    int x;
    char y[20];
    int index = 0;

    printf( "Enter a string :");
    while(1){
        x=getchar();
        if(x==1){
            break;
        }
        if(x==10){
            printf( "\nYou entered: \n");
            printf(y);
            printf("\n");
            memset(y, 0, 20);
            index = 0;
            printf(y);
        }else{
            y[index] = x;
            index ++;
        }
    }
    
    printf( "\nCTRL + A is a correct ending.\n");

    
    return 0;
}
