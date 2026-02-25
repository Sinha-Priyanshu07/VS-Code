#include <stdio.h>
int main()
{
    int row, i, j, k;
    printf("Enter The number of Rows : ");
    scanf("%d", &row);
                      
    printf("Your Pattern is being Printed below\n\n");
    for (i = 1; i <= row; i++)
    {
        for (j = row; j >= i; j--)
        {
            printf(" ");
        }
        
        for (k = 1; k <= (2*i-1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");
}
