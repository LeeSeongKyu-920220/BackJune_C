#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int PrintResidentNum(int k, int n)
{
    if (k == 0)
        return n;

    if (n == 1)
        return 1;

    return PrintResidentNum(k, n - 1) + PrintResidentNum(k - 1, n);
}

// 2775 ¹ø
int main(void)
{
    int test = 0;
    scanf("%d", &test);

    int* k = (int*)malloc(sizeof(int) * test);
    int* n = (int*)malloc(sizeof(int) * test);

    for (int i = 0; i < test; i++)
    {
        scanf("%d", &k[i]);
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < test; i++)
    {
        printf("%d", PrintResidentNum(k[i], n[i]));

        if (i != test - 1)
            printf("\n");
    }

    free(k);
    free(n);

    return 0;
}