//
//  main.c
//  L2S1.9E2
//
//  Created by Christine on 2019/11/11.
//  Copyright © 2019 Christine. All rights reserved.
//

// Alter the last program of exercise 1, output is written to a file.
// The file to write to must be specified by the user.
#include <stdio.h>
#include <stdlib.h>  /* For exit() function */

#define MAX_LINE 256


int main(int argc, const char * argv[]) {
    int x;
    char y[MAX_LINE];
    int index = 0; // index of the array
    FILE *fptr;
    char fname[10];

    printf("Enter a file name: ");
    gets (fname);
    
    fptr = fopen(fname, "w");
    if (fptr == NULL)
    {
        fptr = fopen(fname, "wb");
    }
    
    printf( "Enter a string :");
    while(1){
        x=getchar();
        if(x==1){ // when input equal to ^A, exit the program
            break;
        }
        if(x==10){ // print out when press "Enter"
            printf( "You entered: \n");
            printf(y);
            fputs(y, fptr);
            fputs("\n", fptr);
            
            memset(y, 0, MAX_LINE); // reset array
            index = 0; // reset index counter

            printf( "\nEnter a string :");
        }else{
            y[index] = x; // concatenate new character to the array
            index ++; // add the index
        }
    }
    
    
    fclose(fptr);
    
    printf( "\nCTRL + A is a correct ending.\n");

    
    return 0;
}
