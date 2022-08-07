#include<conio.h>
#include<stdio.h>
void main()
{
    int array[5],i,j,count=0;
    printf("ENTER VALUES:-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(array[i]==array[j])
            {
                count++;
                break;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }
    printf("UNIQUE :-%d",count);
}
