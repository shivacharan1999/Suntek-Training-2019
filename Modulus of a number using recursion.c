#include<stdio.h>
int power(int x,int n);
int mod(int a,int m);
void main()
{
    int a,n,m,b,c;
    printf("Enter the input number\n");
    scanf("%d",&a);
    printf("Enter the power\n");
    scanf("%d",&n);
    printf("Enter the value of m\n");
    scanf("%d",&m);
    b=power(a,n);
    c=mod(b,m);
    printf("Modulus =%d\n",c);
}
int power(int x,int n)
{
    if(n==0)
        return 1;
    return x*power(x,n-1);
}
int mod(int b,int m)
{
    if((b-m)<0)
    return b;
    else
    mod(b-m,m);
}
