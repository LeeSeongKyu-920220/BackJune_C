/*
=========================== 풀이용 기본 연습장 ========================================
=====================================================================================
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 2869번 도전 중...
int main(void)
{
    int climbLength = 0, slipLength = 0, hight = 0;

    scanf("%d %d %d", &climbLength, &slipLength, &hight);

    int addLength = climbLength - slipLength;
    int day = ((hight - climbLength) / addLength)  + (hight - climbLength) % addLength;

    printf("%d", day + 1);
    return 0;
}