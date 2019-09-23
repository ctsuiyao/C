//
//  main.c
//  L1S1.4E2
//
//  Created by Christine Chan on 9/23/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include <stdio.h>

int main() {
    char a= " ";
    int characters = 0;
    int words = 0 ;
    int newlines = 0;
    
    do{
        if ((a >= 'a'&&a <= 'z') || (a >= 'A'&&a <= 'Z')){
            characters++;
        }else if (a == ' '){
            words++;
        }else if (a == '\n'){
            newlines++;
        }
    }while ((a = getchar())!=EOF);
    printf("The number of characters is %d\n", characters);
    printf("The number of words is %d\n", words);
    printf("The number of newlines is %d\n", newlines);
    
    return 0;
}
