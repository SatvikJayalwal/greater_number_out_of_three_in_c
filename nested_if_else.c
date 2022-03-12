#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("\nTHIS PROGRAM DETECTS WHICH NUMBER IS BIGGER OUT OF THREE");
    printf("\nEnter First number : ");
    scanf("%d",&a);
    printf("\nEnter Second number : ");
    scanf("%d",&b);
    printf("\nEnter Third number : ");
    scanf("%d",&c);

    if (a>b)
    {
        if(a>c)
        {
            printf("\n%d is bigger",a);
        }
        else
        {
            printf("\n%d is bigger",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("\n%d is bigger",b);
        }
        else
        {
            printf("\n%d is bigger",c);
        }
    }
    return 0;
}


















