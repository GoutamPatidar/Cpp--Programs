// purpose : read and print the ten numbers 


#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class number
{
private :
	int a[10];

public :
	void readnum();
	void printnum();
};


void number::readnum()
{
	
	for(int j=0;j<10; j++)
		cin>>a[j];
}


void number::printnum()
{

	for(int j=0;j<10; j++)
		cout<<setw(4)<<a[j];
}

void main ()
{
	number obj;

	cout<<"Enter Numbers"<<endl;

	obj.readnum();

	cout<<"Given Numbers"<<endl;

	obj.printnum();

	cout<<endl;
	getch();
}  
