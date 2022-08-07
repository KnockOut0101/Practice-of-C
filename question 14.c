#include<stdio.h>
#include<conio.h>
void main()
{
    int array1[3][3],array2[3][3],i,j,k,array3[3][3],sum=0;
    char a;
    printf("ENTER VALUES FOR MATRIX 1");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    printf("ENTER VALUES FOR MATRIX 2");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }
    printf("MATRIX 1:-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",array1[i][j]);
        }
        printf("\n");
    }
    printf("MATRIX 2:-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",array2[i][j]);
        }
        printf("\n");
    }
    printf("ENTER OPERATION:-");
    scanf(" %c",&a);
    switch(a)
    {
        case'+':for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    {
                        array3[i][j]=array1[i][j]+array2[i][j];
                    }
                }
        case'-':for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    {
                        array3[i][j]=array1[i][j]-array2[i][j];
                    }
                }
        case'*':for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    {
                        for(k=0;k<3;k++)
                        {
                            sum=sum+array1[i][k]*array2[i][j];
                        }
                    array3[i][j]=sum;
                    sum=0;
                    }
                }

    }
    printf("MATRIX 3:-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",array3[i][j]);
        }
        printf("\n");
    }
}
