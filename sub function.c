#include<stdio.h>
#include<conio.h>

int sub()
{  
     int a,b,c;

    printf("enter the value of a\n");
    scanf("%d",&a);

    printf("enter the value of b\n");
    scanf("%d",&b);

    c=a-b;
    printf("%d", c);
}

int main()
{
    sub();
    return 0;
}