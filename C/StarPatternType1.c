// Right Angle Triangle

#include <stdio.h>
int raT1()
{
    int row, i, j, k;
    printf("Enter The number of Rows : "); 
    scanf("%d", &row);                     

    printf("Your Pattern is being Printed below\n");
    for (i = 1; i <= row; i++)             
    {                                      
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int raT2()
{
    int row, i, j, k;
    printf("Enter The number of Rows : ");
    scanf("%d", &row);
                      
    printf("Your Pattern is being Printed below\n");
    for (i = 1; i <= row; i++)
    {
        for (j = row; j >= i; j++)
        {
            printf(" ");
        }
        
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int o;
    
    printf("Welcome to Star Pattern\n");
    printf("Choose one Pattern!\n\n");

    printf("Option 1\n\n*\n**\n***\n****\n*****\n\n");
    printf("Option 2\n\n    *\n   **\n  ***\n ****\n******\n\n");
    printf("Your Option : ");

    scanf("%d",&o);

    if (o == 1)
        raT1();
    
    else if (o == 2)
        raT2();
    else
        printf("Wrong Option!");
}