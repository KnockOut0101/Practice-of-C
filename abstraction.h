#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Shape
{
	public:
	virtual void draw()=0;
};
class rectangle:shape
{
	public:
	void draw()
	{
		cout<<"drawing rectangle"<<endl;
	}
};
class circle:shape
{
	public:
	void draw()
	{
		cout<<"drawing circle"<<endl;
	}
};
int main()
{
	rectangle rec;
	circle cir;
	rec.draw();
	cir.draw();
	return 0;
	getch();
}