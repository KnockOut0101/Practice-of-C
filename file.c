#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
FILE *fp;
char ch[1000];
fp=fopen("kshitij.txt",w);
printf("enter a sentence");
gets(sentence);
fprintf(fp,"%s",sentence);
fp.fclose(fp);
return 0;
}