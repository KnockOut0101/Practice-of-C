#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	void main()
{
FILE *op;
char ch;
op=fopen("kshitij.txt",r);
while(1)
{
	ch=fgetc(op);
	if(ch==EOF)
		break;
	printf("%c",ch);
}
return 0;
}