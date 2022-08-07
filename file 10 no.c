#include<stdio.c>
#include<conio.h>
#include<iostream.h>
void main()
{
FILE *fp;

int i,j[11],sum=0;
fp=fopen("kshitij.txt",w);
for(i=1;i<=10;i++)
{
	fprintf(fp,"%d",&j);
}
fp.fclose(fp);
return 0;
fp=fopen("kshitij.txt",r);
for(i=1;i<=10;i++)
{
	fscanf(fp,"%d",j);
}
for(i=1;i<=10;i++)
{
	printf("%d",j[i]);
	sum=sum+j[i];
}
print("%d",sum);
fp.fclose(fp);
getch();
}