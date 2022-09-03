#include<stdio.h>
int main(void)
{
    int height[3];
    height[0] = 168;
    height[1] = 166;
    height[2] = 165;

    printf("Average: %i\n", (height[0]+height[1]+height[2])/3);
}
