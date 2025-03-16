#include<stdio.h>
void main()
{
    int i,a=-1,b=1,f,n;
    printf("enter n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        f=a+b;
        printf("%d",f);
        a=b;
        b=f;
        i++;
    }
}
