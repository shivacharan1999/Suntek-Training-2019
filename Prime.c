#include<stdio.h>
int Prime(int x,int y);
void main()
{
    int num,p;
    printf("Enter a positive number\n");
    scanf("%d",&num);
    p=Prime(num,num/2);
   if(p==1)
        printf("%d is a prime number\n",num);
   else
      printf("%d is not a prime number\n",num);
}
int Prime(int x,int y)
{
    if(y==1)
    {
        return 1;
    }
    else
    {
       if(x%y==0)
         return 0;
       else
         Prime(x,y-1);
    }
}
