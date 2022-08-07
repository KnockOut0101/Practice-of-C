#include<stdio.h>;
#include<conio.h>;
void main()
{
    int array[5],i,j,k,size=5;
    printf("ENTER VALUES:-");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(array[i]==array[j] && i!=j)
            {
                for(k=j;k<size;k++)
                {
                    array[k]=array[k+1];
                }
                size--;
                j--;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d",array[i]);
    }
}
