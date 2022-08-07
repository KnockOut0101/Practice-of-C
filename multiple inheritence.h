#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class A
{
	public:
	int a;
	void display()
	{
		cin>>a;
		cout<<a;
	}
};
class B:public A
{
	public:
	int b;
	void disp()
	{
		cin>>b;
		cout<<b;
	}
};
class C:public A
{
	public:
	int c;
	void dis()
	{
		cin>>c;
		cout<<c;
	}
};
class D:public A,B
{
	public:
	int d;
	void di()
	{
		cin>>d;
		cout<<d;
		cout<<a * b * c * d;
	}
};
void main()
{
	class D obj;
	obj.A::display();
	obj.disp();
	obj.dis();
	obj.di();
	getch();
}