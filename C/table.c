#include <stdio.h>
void main()
{
    int i, j, pd;
    printf("Enter the number: ");
    scanf("%d", &i);
    for (j = 1; j <= 10; j++)
    {
        pd = i*j;
        if (pd<100)
        printf("%d x %d =  %d\n", i, j, pd);
        else
        printf("%d x %d = %d\n", i, j, pd);
    }
}