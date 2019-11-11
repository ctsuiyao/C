//
//  main.c
//  L1S1.4E6
//
//  Created by Christine Chan on 10/29/19.
//  Copyright © 2019 Christine Chan. All rights reserved.
//

#include <stdio.h>

int main() {
    char a;
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    int count_4 = 0;
    while ((a = getchar())!=EOF)
    {
        switch(a)
        {
            case '0':
                count_0 += 1;
                break;
            case '1':
                count_1 += 1;
                break;
            case '2':
                count_2 += 1;
                break;
            case '3':
                count_3 += 1;
                break;
            case '4':
                count_4 += 1;
                break;
            default:
                break;
                
        }
    }
    printf("count 0: %d \n", count_0);
    printf("count 1: %d \n", count_1);
    printf("count 2: %d \n", count_2);
    if(count_3==0){
        printf("Number three appears zero time.\n");
    }else if(count_3==1){
        printf("Number three appears one times.\n");
    }else if(count_3==2){
        printf("Number three appears two times.\n");
    }else{
        printf("The number three appears more than two times.\n");
    }
    printf("count 4: %d \n", count_4);
    return 0;
}
