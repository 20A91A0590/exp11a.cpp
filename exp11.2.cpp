#include <iostream> 
using namespace std;
int main()
{
    int choice; 
    try
    {
        cout<<"Enter any choice: "; 
        cin>>choice;
        if(choice == 0) 
		{
	     
		 cout<<"Hello Baby!"<<endl;
	    }   
        else if(choice == 1)    
		throw (100);    
        else if(choice == 2)   
		 throw ('R');    
        else if(choice == 3)  
		 throw (1.23f);  
        else  
		{
		 cout<<"Bye Bye !!!"<<endl;
	    }
    }
    catch(int a)
    {
        cout<<"Integer Exception Block "<<endl;
        cout<<"value is: "<<a<<endl;
    }
    catch(char b)
    {
        cout<<"Character Exception Block"<<endl;
        cout<<"value is: "<<b<<endl;
    }   
    catch(float c)
    {
        cout<<"Float Exception Block"<<endl;
        cout<<"value is: "<<c<<endl;
    }       
    return 0;
}
