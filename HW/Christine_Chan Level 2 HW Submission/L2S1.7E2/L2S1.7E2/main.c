//
//  main.c
//  L2S1.7E2
//
//  Created by Christine on 2019/11/10.
//  Copyright © 2019 Christine. All rights reserved.
//

/* Calculate the length of a string */
#include <stdio.h>
#define MAXLINE 30

// String lenght declaration
int Length(char str[]);

int main(){
    char string[MAXLINE+1]; // Line of maxium 30 chars + \0
    int c; // The input character
    int i=0; // The counter
    // Print intro text
    printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);
    // Get the characters
    while ((c=getchar())!=EOF && i<MAXLINE)
    {
    // Append entered character to string
    string[i++]=(char)c;
    }
    string[i]='\0'; // String must be closed with \0
    printf("String length is %d\n", Length(string));
    return 0;
}
/* Implement the Length() function here */
int Length(char *p) // input is the opinter of the string
{
    int count = 0; // reset the counter to zero
 
    while(*p!='\0') // before count to the end of the string, add on to the counter
    {
        count++; // add counter
        p++; // pointer + 1
    }
 
    return count;
}
