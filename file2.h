#include<iostream.h>
#include<fstream.h>
using namespace std;
int main()
{
	int i,j,k;
	ifstream inobj("kshitij.txt");
	inobj>>i>>j>>k;
	cout<<i<<' '<<k<<' '<<j<<' '<<endl;
	return 0;
}