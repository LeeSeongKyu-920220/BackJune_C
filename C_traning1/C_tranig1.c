/*
=========================== Ǯ�̿� �⺻ ������ ========================================
=====================================================================================
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 2869�� ���� ��...
int main(void)
{
    int climbLength = 0, slipLength = 0, hight = 0;

    scanf("%d %d %d", &climbLength, &slipLength, &hight);

    int addLength = climbLength - slipLength;
    int day = ((hight - climbLength) / addLength)  + (hight - climbLength) % addLength;

    printf("%d", day + 1);
    return 0;
}