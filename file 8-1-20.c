#include<conio.h>
#include<stdio.h>
void main()
{

        char filename[20];
        FILE *fp;
        printf("ENTER FILE NAME:-\n");
        scanf("%s",filename);

        fp=fopen(filename,"r");
        if(fp==NULL)
        {
            printf("ERROR,INVALID FILE NAME");
        }
        else
        {
            printf("FILE EXISTS");
        }
        fclose(fp);
}
