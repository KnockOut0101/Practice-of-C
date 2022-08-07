#include<iostream.h>
#include<conio.h>
class a
{
	int a;
	public:
	friend void disp();
	
};
class b
{
	int b;
	public:
	friend void disp();
};
void disp()
{
	a ob;
	a obj;
	cin>>ob.a>>obj.b;
	if(ob.a>obj.b)
	{
		cout<<"a is greater"<<endl;
	}
	cout<<"a="<<on.a<<endl<<"b="<<obj.b;
}
void main()
{
	clrscr();
	disp();
	getch();
}