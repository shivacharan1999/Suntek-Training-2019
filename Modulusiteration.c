#include<stdio.h>
int power(int x,int n);
int mod(int b,int m);
int main()
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
    printf("Modulus = %d",c);
}
int power(int x,int n)
{
    int y=1,i;
    if(n==0)
        return 1;
    else
    {
        for(i=1;i<=n;i++)
        {
            y=y*x;
        }
        return y;
    }
}
int mod(int b,int m)
{
    for(int i=0;;i++)
    {
        if((b-m)<0)
        return b;
        else
        b=b-m;
    }

}
