//
//  main.c
//  L2S1.8E1
//
//  Created by Christine on 2019/11/10.
//  Copyright © 2019 Christine. All rights reserved.
//

#include <stdio.h>

// declaire the struct
struct Article
{
    int art_num;
    int quant;
    char description[20];
};
int main(int argc, const char * argv[]) {
    
    struct Article a1 = {10, 5, "Hello, World!\n"};
    // a2 is a pointer to structure a1
    struct Article *a2 = &a1;
    // Accessing structure members using structure pointer
    printf("%d\n %d\n %s\n", a2->art_num, a2->quant, a2->description);
    return 0;
}
