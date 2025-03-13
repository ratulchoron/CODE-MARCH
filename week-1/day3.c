#include <stdio.h>

int main()
{
    long int pass;

    while (1)  
    {
        scanf("%ld", &pass);

        if (pass == 1999)
        {
            printf("Correct\n");
            break;   
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}
