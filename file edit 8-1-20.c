#include<stdio.h>
#include<conio.h>
void main()
{
    char filename[20];
    FILE *fp;
    printf("ENTER FILE NAME:-\n");
    scanf("%s",filename);

    fp = fopen(filename,"r+");
    if(fp != NULL)
    {
        while(1)
        {
            filename[0]=fgetc(fp);
            if(filename[0]!=EOF)
                printf("%c",filename[0]);
            else
                break;
        }
    }
    else
    {
        printf("FILE DOESN'T EXIST");
    }
    fclose(fp);
}
