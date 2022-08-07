#include<stdio.h>
#include<conio.h>
/*write a c program to accept three int no.s from user
and display max and min out of it*/
void main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>(b && c))
	{
		printf("a is max",a);
	}
	else if(b>(a && c))
	{
		printf("b is max",b);
	}
	else
	{
		printf("c is max",c);
	}
	getch();
}