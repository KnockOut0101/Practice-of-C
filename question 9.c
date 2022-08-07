#include<stdio.h>
#include<conio.h>
void main()
{
    int i,index,size;
    printf("ENTER SIZE:-");
    scanf("%d",&size);
    int array[size];
    printf("ENTER ELEMENTS:-");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("ENTER INDEX\n");
    scanf("%d",&index);
    if(size=0)
    {
        printf("ARRAY size is 1");
        scanf("%d",index);
        printf("%d",index);
    }
}
