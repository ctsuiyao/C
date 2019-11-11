//
//  main.c
//  L1S1.4E3
//
//  Created by Christine Chan on 9/23/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
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
        switch(a){
            case ' ':
                words+= !space;
                space = 1;
                break;
            case '\n':
                space = 0;
                newlines++;
                break;
            case EOF:
                break;
            default:
                switch(isalnum(a)){
                    case 1:
                        space = 0;
                        characters++;
                        break;
                    case 0:
                        space = 0;
                        break;
                    default:
                        space = 0;
                        break;
                }
        }
        
        
        
        
    }
    printf("The number of characters is %d\n", characters);
    printf("The number of words is %d\n", words);
    printf("The number of newlines is %d\n", newlines);
    
    return 0;
}
