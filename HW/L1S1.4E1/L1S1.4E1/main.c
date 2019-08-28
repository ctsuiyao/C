//
//  main.c
//  L1S1.4E1
//
//  Created by Christine on 2019/8/28.
//  Copyright © 2019 Christine. All rights reserved.
//

#include <stdio.h>
#include <ncurses.h>

int main(int argc, const char * argv[]) {
    char c;
    
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    
    printf("Enter character: ");
    c = getchar();
    printf("Character entered: %c", c);
    putchar(c);
    return 0;
}
