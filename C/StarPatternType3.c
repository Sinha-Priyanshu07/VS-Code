#include <stdio.h>
int main()
{
    int i,j,k,row;
    printf("Enter The Number of Rows : ");
    scanf("%d",&row);

    printf("\nYour Pattern is being Printed\n\n\n");
    
  for (i = row; i > 1; i--)
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
    
    for (i = 1; i <= row; i++)
    {
        for (j = row; j >= i; j--)
        {
            printf(" ");
        }

        for (k = 1; k <= (2*i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
}