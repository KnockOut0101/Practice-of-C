#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,index,number,array[5],size=5;
    printf("ENTER ELEMENTS:-");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("ENTER NO.\n");
    scanf("%d",&number);
    for(i=0;i<5;i++)
    {
        if(number==array[i])
        {
            index=i;
            printf("NO found\n");
            break;
        }
        else
        {
            printf("NO. DOESN'T EXIST\n");
        }
    }
    if(number==array[i])
    {
        for (j=index;j<size-1;j++)
        {
            array[j]=array[j+1];
        }
        printf("Resultant array:\n");

        for (j=0;j<size-1;j++)
        {
            printf("%d\n", array[j]);
        }
    }
}
