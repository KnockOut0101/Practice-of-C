#include<stdio.h>

int main(int argc, char *argv[])
{
    if(argc==3)
    {
        FILE *fp;
        int return_value;
        char name[50], found='f';

        fp=fopen(argv[1],"r");
        if(fp!=NULL)
        {
            while(1)
            {
                return_value=fscanf(fp,"%s",name);
                if(return_value==-1)
                    break;
                if(strcmp(name,argv[2])==0)
                {
                    printf("Found");
                    found='t';
                    break;
                }
            }
            if(found=='f')
                printf("\n Not Found");

            fclose(fp);
        }
        else
            printf("Incorrect Filename Passed");
    }
}
