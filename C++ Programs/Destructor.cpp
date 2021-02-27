// purpose : demonstrate destructor  function.


#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class biodata
{
	private :
		char name[20];
		int age;
		float sal;
		char address[20];
	public :
		biodata();
		~biodata();
		void read();
		void display();
};

biodata::biodata()
{
	name[0]='\0';
	age=0;
	sal=0.00;
	address[0]='\0';
	cout<<"Object Created"<<endl;
}

biodata::~biodata()
{
	cout<<"Object Destroyed"<<endl;
}
void biodata::read()
{
	cout<<"name  "<<endl;
	cin>>name;
	cout<<"age   "<<endl;
	cin>>age;
	cout<<"sal   "<<endl;
	cin>>sal;
	cout<<"add   "<<endl;
	cin>>address;
}

void biodata::display()
{
	cout<<"name  = "<<name<<endl;
	cout<<"age   = "<<age<<endl;
	cout<<"sal   = "<<sal<<endl;
	cout<<"add   = "<<address<<endl;
}


void demonstrate();  //prototype declaration

void main (void)
{
	demonstrate();
	getch();
}


void demonstrate()  //function definition
{
	biodata obj1;
	obj1.read();
	obj1.display();
}  
