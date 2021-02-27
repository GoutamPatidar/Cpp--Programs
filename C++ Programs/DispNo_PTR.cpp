// purpose : read and display given number using POINTER

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class number
{
	private :
		int num;
	public :
		void readnum();
		friend void printnum(number *);

};
inline void number::readnum()
{
	cout<<"Enter number"<<endl;
	cin>>num;
}

void printnum(number *ob)
{
	cout<<"Given number"<<endl;
	cout<<ob->num<<endl;
}

void main (void)
{	
	number obj, *p;
	p=&obj;
	p->readnum();
	printnum(p);
	getch();
}
