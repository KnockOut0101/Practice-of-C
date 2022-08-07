#include<stdio.h>
#include<conio.h>
void main()
{
    int array[3][3],i,j;
    printf("ENTER VALUES");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("ARRAY:-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("TRANSPOSE:-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }
}
