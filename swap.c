#include<stdio.h>
main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d\tb=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a=%d\tb=%d",a,b);
    return 0;
    }
