#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c=1;
    for(a=10;a>=1;a--)
    {
            for(c=a;c>1;c--){
                printf(" ");
            }
        for(b=10;b>=a;b--)
        {
           printf("*");
        }
        printf("\n");
    }
    getch();
}
