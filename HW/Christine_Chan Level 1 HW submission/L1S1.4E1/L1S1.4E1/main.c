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
    int space = 0;
    while ((a = getchar())!=EOF)
    {
        if ((a >= 'a'&&a <= 'z') || (a >= 'A'&&a <= 'Z')){
            space = 0;
            characters++;
        }else if ((a == ' ') && space!=1){
            space = 1;
            words++;
        }else if (a == '\n'){
            space = 0;
            newlines++;
        }
        
        
    }
    printf("The number of characters is %d\n", characters);
    printf("The number of words is %d\n", words);
    printf("The number of newlines is %d\n", newlines);
    
    return 0;
}
