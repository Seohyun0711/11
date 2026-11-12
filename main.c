#include <stdio.h>

int main(void)
{
    int i;
    int grade[5];
    int *ptr;
    int sum = 0;
    int average;

    for (i = 0; i < 5; i++)
    {
        printf("grade[%i] = ", i);
        scanf("%d", &grade[i]);
    }

    ptr = grade;

    for (i = 0; i < 5; i++)
    {
        printf("grade[%i] = %d\n", i, *(ptr + i));
        sum += *(ptr + i);
    }

    average = sum / 5;

    printf("average : %d\n", average);

    return 0;
}
