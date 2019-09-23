//
//  main.c
//  L1S1.4E1
//
//  Created by Christine on 2019/8/28.
//  Copyright © 2019 Christine. All rights reserved.
//

#include <stdio.h>

int main() {
    char a;
    int characters = 0;
    int words = 1;
    int newlines = 0;
    while ((a = getchar())!=EOF)
    {
        if ((a >= 'a'&&a <= 'z') || (a >= 'A'&&a <= 'Z')){
            characters++;
        }else if (a == ' '){
            words++;
        }else if (a == '\n'){
            newlines++;
        }
        
        
    }
    printf("The number of characters is %d\n", characters);
    printf("The number of words is %d\n", words);
    printf("The number of newlines is %d\n", newlines);
    
    return 0;
}
