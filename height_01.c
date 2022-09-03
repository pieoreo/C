#include<cs50.h>
#include<stdio.h>

const int N = 3;

int main(void)
{
    int height[N];
    height[0] = 168;
    height[1] = 166;
    height[2] = 165;

    printf("Average: %i\n", (height[0]+height[1]+height[2])/N);
}
