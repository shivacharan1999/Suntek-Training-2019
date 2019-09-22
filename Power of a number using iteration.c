#include<stdio.h>
int power(int x,int n);
int main()
{
    int a,n,b;
    printf("Enter the input number\n");
    scanf("%d",&a);
    printf("Enter the power\n");
    scanf("%d",&n);
    b=power(a,n);
    printf("%dth Power of %d =%d",n,a,b);
}
int power(int x,int n)
{
    int y=1,i;
    for(i=1;i<=n;i++)
    {
      y=y*x;
    }
    return y;
}
