//
//  main.c
//  L1S1.3E7
//
//  Created by Christine on 2019/8/27.
//  Copyright © 2019 Christine. All rights reserved.
//

#include <stdio.h>

int shift_n(number, n) {
    return number << n;
}

int main() {
    int x = 2;
    int n = 3;
    printf("%d\n", shift_n(x, n));
    return 0;
}
