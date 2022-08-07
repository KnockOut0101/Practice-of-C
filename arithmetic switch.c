//accept 2 no.s and arithmetic operations on 2 variables
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	char c;
	printf("ENTER SWITCH CASE);
	scanf("%c",&c);
	printf("ENTER A AND B);
	scanf("%d%d"&a,&b);
	switch(c)
	{
		case '+':printf("&d",a+b);
		break;
		case '-':printf("%d",a-b);
		break;
		case '/':printf("%d",a/b);
		break;
		case '*':printf("%d",a*b);
		break;
		default:printf("%d",a%b);
	}
	getch();
}