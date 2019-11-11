//
//  Defs.h
//  L2S1.6E2
//
//  Created by Christine on 2019/11/10.
//  Copyright © 2019 Christine. All rights reserved.
//

// Exercise 1
// define 2 prints macro, that will print out the input variable with the format it provided
#define PRINT1(fmt, args...) fprintf(stdout, fmt, ##args);
#define PRINT2(fmt, args...) fprintf(stdout, fmt, ##args)

// Exercise 2
// define 2 macro, that will return the max number within the input. MAX3 should use MAX2
#define MAX2(x,y) x > y ? x : y
#define MAX3(x,y,z) MAX2(MAX2(x,y),z)
