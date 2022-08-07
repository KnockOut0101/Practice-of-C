#include<stdio.h>;
#include<conio.h>;
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
            if(array[i]==array[j] && i!=j)
            {
                count++;
                break;
            }
        }
    }
    printf("count of duplicates %d",count);
}
