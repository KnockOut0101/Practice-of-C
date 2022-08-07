/* topics:-
1 File reading
2 copying content in file
3 using pointer in file
4 files
5 pointer
6 structures and pointer
7 nested structures in pointers
8 accessing values in an array and dynamic 2d array
9 memory allocation functions malloc,calloc,realloc
10 file creation and deletion*/

/*problem 8*/
#include<stdio.h>
void main()
{
    int i;
    int array[10];
    int array2[10];
    printf("array 1:-");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d",array[i]);
    }
    printf("\n");
    printf("array 2");
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",array2[i]);
    }
    printf("\n");
    printf("copying\n");
    for(i=0;i<10;i++)
    {
        array2[i]=array[i];
    }
    printf("\n");
    printf("array 2 after copying");
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d",array2[i]);
    }
}
/* copy content of one a string and copy into another array without using library*/
