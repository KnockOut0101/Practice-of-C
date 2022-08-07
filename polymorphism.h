#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Check
{
public:
void sum(int x)
{
	int a;
	cin>>a;
	cout<<a + x;
}
void sum(int x,int y)
{
	cout<<x + y;
}
void sum(float x)
{
	cout>>x;
}
};
int main()
{
	Check ob;
	ob.sum(10);
	ob.sum(10,20);
	ob.sum(10.1f);
	getch();
}