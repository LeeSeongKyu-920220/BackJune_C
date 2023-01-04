#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

bool IsEven(int num)
{
    if (num % 2 == 0)
        return true;
    else
        return false;
}

void SearchN(const int n, int* head, int* denominator)
{
    int count = 0;
    int sum = 0;
    int go = 0;

    while (n > sum)
    {
        count++;
        sum += count;
    }

    sum -= count;
    go = n - sum;

    if (IsEven(count))
    {
        *head = go;
        *denominator = (count - go) + 1;
    }
    else if (!IsEven(count))
    {
        *head = (count - go) + 1;
        *denominator = go;
    }

}
int main(void)
{
    int inputNum = 0;
    scanf("%d", &inputNum);

    if (inputNum < 1 || inputNum > 10000000)
        return -1;

    int head = 0;
    int denominator = 0;

    SearchN(inputNum, &head, &denominator);
    printf("%d/%d", head, denominator);

    return 0;
}