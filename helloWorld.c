#include <stdio.h>
int main()
{
    int n = 4, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
   // scanf("%d",&n);

    // show error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else if (n == 0) 
	printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("%d", factorial);
    }

    return 0;
}
