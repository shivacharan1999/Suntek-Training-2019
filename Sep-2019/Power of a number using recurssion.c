#include<stdio.h>
int power(int x,int n);
void main()
{
    int a,n,b;
    printf("Enter the input number\n");
    scanf("%d",&a);
    printf("Enter the power\n");
    scanf("%d",&n);
    b=power(a,n);
    printf("%dth Power of %d =%d\n",n,a,b);
}
int power(int x,int n)
{
    if(n==0)
    return 1;
    return x*power(x,n-1);

}
