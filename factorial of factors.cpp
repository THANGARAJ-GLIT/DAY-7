#include<stdio.h>
int main()
{
    int a,c=1,i,d=0;
    printf("enter the first number= ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c=c*i;
    }
    printf("factorial of the numberis= %d\n",c);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("the factors of number are=%d\n",i);
        }
    }
}
