#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct student
{
    int a;
    char lib[20];
};
void main()
{
    struct student std;
    scanf("%d",&std.a);
    strcpy(std.lib,"LIBRARY");
    printf("%d %s",std.a,std.lib);
}
