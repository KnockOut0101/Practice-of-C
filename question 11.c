#include<stdio.h>
#include<conio.h>
void main()
{
    int i,index,array[5],size=5;
    printf("ENTER ELEMENTS:-");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("ENTER INDEX\n");
    scanf("%d",&index);
    if (index>=size+1)
      printf("Deletion not possible.\n");
    else
    {
        for (i=index-1;i<size-1;i++)
        {
            array[i]=array[i+1];
        }
        printf("Resultant array:\n");

        for (i=0;i<size-1;i++)
        {
            printf("%d\n", array[i]);
        }
    }
}
