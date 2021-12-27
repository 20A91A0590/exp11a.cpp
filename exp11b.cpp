#include<iostream>
using namespace std;
int main()
{
try
{
	int a[5]={1,2,3,4,5};
	int i;
	cout<<"enter i";
	cin>>i;
	if(i>=5)
	{
		throw i;
	}
	else if(i<0)
	{
		throw "INDEX SHOULD NOT BE NEGATIVE VAALUE";
	}
	else
	{
	  a[i]=100;
	  cout<<a[i];	
	}
}
catch(int x)
{
	cout<<"array index out of bound";
}
catch(const char*m)
{
	cout<<m;
}
}
