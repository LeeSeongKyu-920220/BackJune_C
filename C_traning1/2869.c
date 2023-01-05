#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 2869¹ø
int main(void)
{
    int climbLength = 0, slipLength = 0, hight = 0;

    scanf("%d %d %d", &climbLength, &slipLength, &hight);

    int addLength = climbLength - slipLength;
    int goalDist = hight - climbLength;

    if (goalDist == 0)
    {
        printf("%d", 1);
        return 0;
    }

    int day = 0;
    day = goalDist / addLength;
    if ((day * addLength) + climbLength >= hight)
        printf("%d", day + 1);
    else
        printf("%d", day + 2);

    return 0;
}