#include <stdio.h>
#include <stdint.h>

int main(void)
{
    char *pc;
    int *pi;
    double *pd;

    pc = (char *)(uintptr_t)10000;
    pi = (int *)(uintptr_t)10000;
    pd = (double *)(uintptr_t)10000;

    printf("증가 전 : pc = %p, pi = %p, pd = %p\n",
           (void *)pc, (void *)pi, (void *)pd);

    pc++;
    pi++;
    pd++;

    printf("증가 후 : pc = %p, pi = %p, pd = %p\n",
           (void *)pc, (void *)pi, (void *)pd);

    return 0;
}

