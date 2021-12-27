#include<iostream>
using namespace std;
int main()
{
	try
	{
		float x,y;
		cout<<"enter the x,y values:";
		cin>>x>>y;
		if(y==0)
		{
			throw y;
		}
		else
		{
			cout<<x/y;
		}
	}
	catch(float a)
	{
		cout<<"DIVIDED BY ZERO ERROR";
	}
}
