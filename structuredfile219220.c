/*READ INFO FOR STUDENT IN A STRUCTURED FILE AND DISPLAY IT*/
#include<stdio.h>
int main(int argc,char *argv[])
{
    if(argc==2)
    {
        FILE*fp;
        fp=fopen(argv[1],"r");
        if(fp!=NULL)
        {
            int student_id, return_value;
            char Name[20];
            float marks;
            while(1)
            {
                return_value=fscanf(fp,"%d\t%s\t%f\n",&student_id,Name,&marks);
                if(return_value==-1) //EOF
                    break;
                printf("\nStudent Id: %d",student_id);
                printf("\nName : %s",Name);
                printf("\nMarks: %f",marks);
            }
            fclose(fp);
        }
        else
        {
            printf("Incorrect file name:-");
        }
    }
    else
    {
        printf("Enter Correct Arguments:-");
    }
    return 0;
}
