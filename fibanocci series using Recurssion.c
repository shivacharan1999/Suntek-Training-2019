#include <stdio.h>

int main()
{
    int i,a=0,n;
    printf("Enter the no\n");
    scanf("%d\t",&n);
    for(i=0;i<n;i++)
    {
        printf("%d",fab(a));
        a++;
    }
}
int fab(int x)
{
    if(x<=1)
    return x;
    return fab(x-1)+fab(x-2);
}
