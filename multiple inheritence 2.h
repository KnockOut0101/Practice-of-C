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
class B:public virtual A
{
	public:
	int b;
	void disp()
	{
		cin>>b;
		cout<<b;
	}
};
class C:public virtual A
{
	public:
	int c;
	void dis()
	{
		cin>>c;
		cout<<c;
	}
};
class D:public A,public B
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
	obj.display();
	obj.disp();
	obj.dis();
	obj.di();
	getch();
}