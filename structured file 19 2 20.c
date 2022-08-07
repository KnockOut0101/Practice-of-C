/*ENTER INFO FOR STUDENT IN A STRUCTURED FILE AND STORE IT*/
#include<stdio.h>
int main(int argc,char *argv[])
{
    if(argc==2)
    {
        FILE*fp;
        int student_id;
        char Name[20];
        float marks;

        fp=fopen(argv[1],"w");
        if(fp!=NULL)
        {
            while(1)
            {
                printf("\n Enter Student Id (Enter -1 to stop):-\n");
                scanf(" %d",&student_id);
                if(student_id==-1)
                    break;
                printf("Enter Name:-\n");
                scanf(" %s",&Name);
                printf(" Enter Marks:-\n");
                scanf(" %f",&marks);
                fprintf(fp,"ID:-%d\nName:-%s\nMarks:-%f\n",student_id,Name,marks);

            }
            fclose(fp);
        }
    }
}
