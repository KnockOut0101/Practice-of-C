#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a,b,array[5];
    printf("ENTER VALUES:-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    a=array[0];
    b=array[0];
    for(i=0;i<5;i++)
    {
        if(array[i]>a)
        {
            a=array[i];
        }
        else if(array[i]<b)
        {
            b=array[i];
        }
    }
    printf("MAX:-%d MIN:-%d",a,b);
}
