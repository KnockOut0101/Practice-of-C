#include<fstream.h>
class student
{
	private:
	int iReg_no;
	char cName[20];
	public:
	void setRegno();
	void setName();
	int getRegno();
	char *getName();
};
void main()
{
	ofstream Sfil("studfile.dat");
	char ch;
	student Svar;
	Svar.setRegno();
	Svar.setName();
	Sfil<<Svar.getName();
	Sfil.close();
	cout<<"\n do you want to view your file";
	cin>>ch;
	if(ch=='y')
	{
		ifstream Sfil("studfile.dat")
		char ireg;
		char name[20];
		Sfil>ireg>>nam;
		cout<<"\n Registration number is"<<ireg;
		cout<<"\n Student name is"<<name;
	}
}