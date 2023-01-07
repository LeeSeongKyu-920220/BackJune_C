#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

// 10250¹ø
int CalcFloor(const int H, const int N)
{
    if (N % H == 0)
        return H * 100;

    else
        return N % H * 100;
}

int CalcNumber(const int H, const int N)
{
    if (N % H == 0)
        return N / H;

    else
        return N / H + 1;
}

void PrintRoomNumber(const int count, const int* H, const int* N)
{
    for (int i = 0; i < count; i++)
    {
        if (i == count - 1)
            printf("%d", CalcFloor(H[i], N[i]) + CalcNumber(H[i], N[i]));
        else
            printf("%d\n", CalcFloor(H[i], N[i]) + CalcNumber(H[i], N[i]));
    }
}

int main(void)
{
    int test = 0;
    scanf("%d", &test);

    int* H = (int*)malloc(sizeof(int) * test);
    int* W = (int*)malloc(sizeof(int) * test);
    int* N = (int*)malloc(sizeof(int) * test);

    for (int i = 0; i < test; i++)
    {
        scanf("%d %d %d", &H[i], &W[i], &N[i]);
    }

    PrintRoomNumber(test, H, N);

    free(H);
    free(W);
    free(N);

    return 0;
}