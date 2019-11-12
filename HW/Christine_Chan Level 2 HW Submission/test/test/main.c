//
//  main.c
//  test
//
//  Created by Christine on 2019/11/11.
//  Copyright © 2019 Christine. All rights reserved.
//

#include <stdio.h>


union Name
{
  char firstName[10];
  char lastName[10];
};

int main()
{
  union Name name;
  strcpy(name.firstName, "Dennis");
  strcpy(name.lastName, "Ritchie");
  printf("%d", sizeof(name));
}
