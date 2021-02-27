// purpose : convert upper to lower case letters 


#include <iostream.h>
#include <conio.h>
void main()
{
	char any;
	cout<<"enter upper char\n";
	cin>>any;
	cout<<"enter lower char\n";
	if(any>='A' && any <='Z')
		cout<<(char)(any+32);
	else
	    cout<<any;
	cout<<endl;
	getch();
}  
