//
//  main.c
//  L2S1.7E4
//
//  Created by Christine on 2019/11/10.
//  Copyright © 2019 Christine. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Declare constant name of weeks
    const char * WEEKS[] = { "Sunday", "Monday", "Tuesday",
                            "Wednesday", "Thursday", "Friday",
                            "Saturday"};
    int week;

    // Input week number from user
    printf("Enter week number: ");
    scanf("%d", &week);
    
    if(week > 0 && week < 8){
        // Print week name using array index
        printf("%s\n", WEEKS[week-1]);
    }else{
        printf("Wrong Input");
    }

    return 0;
}
