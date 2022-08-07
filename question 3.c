#include<stdio.h>;
#include<conio.h>;
void main()
{
    int array[5],i,sum=0,pro=1;
    printf("ENTER VALUES:-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
        sum=sum+array[i];
        pro=pro*array[i];
    }
    printf("ARRAY:-");
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    printf("PRODUCT:-%d \n",pro);
    printf("SUM:-%d",sum);
}
