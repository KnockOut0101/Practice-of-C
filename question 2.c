#include<stdio.h>;
#include<conio.h>;
void main()
{
    int array[5],i;
    printf("ENTER VALUES:-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("%d ",array[i]);
    }
}
