//
//  Defs.h
//  L2S1.6E1
//
//  Created by Christine on 2019/11/10.
//  Copyright © 2019 Christine. All rights reserved.
//

// define 2 prints macro, that will print out the input variable with the format it provided
#define PRINT1(fmt, args...) fprintf(stdout, fmt, ##args);
#define PRINT2(fmt, args...) fprintf(stdout, fmt, ##args)
