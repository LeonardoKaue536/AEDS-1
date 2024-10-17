#include <stdio.h>

// CODIGO 1
int main()
{
    
    int *ptr, i;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    for (i = 0; i < 5; i++)
    {
        *ptr = *ptr + 1;
    }
    printf("\nptr1 : %d", *ptr);
    free(ptr);

    programa2();
    return 0;
}
// CODIGO 2
void programa2()
{
    int *ptr, i;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    for (i = 0; i < 5; i++)
    {
        ptr = ptr + 1;
    }
    printf("\n ptr 2: %p", ptr);
    free(ptr);
    return 0;
}
