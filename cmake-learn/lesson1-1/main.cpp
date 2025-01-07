#pragma once
#include <stdio.h>
int add(int a, int b);

int main()
{
    int c = add(1, 2);
    printf("c=%d\n", c);
    return 0;
}