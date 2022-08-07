#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class animal
{
	public:
	void eating()
	{
		cout<<"eating"<<endl;
	}
};
class Dog:public animal
{
	public:
	void eating()
	{
		cout<<"eating"<<endl;
	}
};
void main()
{
	dog d;
	d.eating();
	return 0;
	getch();
}