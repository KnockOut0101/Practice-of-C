#include<stdio.h>
#include<ctype.h>
void main()
{
    char filename[20],c,fileread[20];
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
        printf("original");
        fileread[0]=fgetc(fp);
        printf("after edit");
        if(isupper(fileread))
            c=tolower(fileread);
            printf(c);
        if else(islower(fileread))
            c=toupper(fileread);
            printf(c);
        if(fileread[0]!=EOF)
                printf("%c",fileread[0]);
    }
    fclose(fp);
}
