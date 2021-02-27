// purpose : Read and display number(Cloning concept)


#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class number
{
	private :
		int num;
		
	public :
		number();
		number(number &);
		void read();
		void display();
};

number::number()
{

}

number::number(number &obj)
{
	num=obj.num;
}

void number::read()
{
	cout<<"Enter Number"<<endl;
	cin>>num;
}

void number::display()
{
	cout<<num<<endl;
}


void main (void)
{
	number obj;
	obj.read();
	number newobj(obj);
	cout<<"GIVEN NUMBER via second object"<<endl;
	newobj.display();

getch();
}  
