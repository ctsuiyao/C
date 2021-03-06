//
//  main.c
//  L2S1.9E1
//
//  Created by Christine on 2019/11/11.
//  Copyright © 2019 Christine. All rights reserved.
//

#include <stdio.h>
#define MAX_LINE 256


int main(int argc, const char * argv[]) {
    // Create a C-program that reads the characters from the keyboard and shows them on screen
    // (the inputted characters should only be displayed when the user hits 'enter',
    // line by line).
    //When ^A is entered, the program must end properly. T
    // hen the following message will appear: “CTRL + A is a correct ending.”
    // Tip: getchar() reads and putchar() writes the type int. The value of ^A is 1.
    int x;
    char y[MAX_LINE];
    int index = 0; // index of the array

    printf( "Enter a string :");
    while(1){
        x=getchar();
        if(x==1){ // when input equal to ^A, exit the program
            break;
        }
        if(x==10){ // print out when press "Enter"
            printf( "You entered: \n");
            printf(y);
            memset(y, 0, MAX_LINE); // reset array
            index = 0; // reset index counter
            printf(y);
            printf( "\nEnter a string :");
        }else{
            y[index] = x; // concatenate new character to the array
            index ++; // add the index
        }
    }
    
    printf( "\nCTRL + A is a correct ending.\n");

    
    return 0;
}
