#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
int main()
{
	ofstream outobj("int.tst");
	outobj<<25<<' '<<4567<<' '<<8910;
	return 0;
}
