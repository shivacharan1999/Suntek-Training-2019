#include <stdio.h>
#include <stdlib.h>
long int fact(int n);
void main()
{
    int n,x;
    printf("Enter the input number\n");
    scanf("%d",&n);
    x=fact(n);
    printf("factorial = %ld",x);

}
long int fact(int n)
{
    if(n==0)
        return 1;
    else if(n<0)
    {
        printf("Factorial is not possible");
        exit(0);
    }
    else
        return n*fact(n-1);

}
