#include<conio.h>
#include<stdio.h>
void main()
{
    int array[3][3],sum1=0,sum2=0,i,j;
    printf("ENTER VALUES FOR MATRIX");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum1=sum1+array[i][j];
            }
            else
            {
                sum2=sum2+array[i][j];
            }
        }
    }
    printf("SUM OF DIAGONAL:- %d\n SUM OF OTHER ELEMENTS:- %d",sum1,sum2);
}
