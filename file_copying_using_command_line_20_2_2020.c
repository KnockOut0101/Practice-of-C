#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(int argc,char argv[])
{
    if(argc==3)
    {
        FILE *fp1,*fp2;
        fp1=fopen(argv[1],"r");
        fp2=fopen(argv[2],"w");
        if(fp1=NULL && fp2!=NULL)
        {
            char line[100],target_line[100];
            int i;
            while((fgets(line,100,fp1))!=NULL)
            {
                for(i=0;i<strlen(line);i++)
                {
                    if(isupper(line[i]))
                        target_line[i]=tolower(line[i]);
                    else
                        target_line[i]=toupper(line[i]);
                }
                target_line[i] ='\0';
                fputs(target_line,fp2);
            }
            fclose(fp1);
            fclose(fp2);
            printf("\nDestination File Created\n");
        }
        else
            printf("\neither og the file is not found");
    }
    else
        printf("\n Incorrect Argument\n");
    return 0;
}
