// purpose     : count the upper, lower, number and special characters
  

#include<iostream.h>
#include<conio.h>

class text
{
	public :
		char ch[100];
		void readtext();
		void printtext();
};

class count : public text
{
	private :
		int upp, low, num, spe;
	public  :
		void counttext();
		void printresult();
};

void text::readtext()
{

	for(int i=0; (ch[i]=cin.get())!='$'; i++);
	ch[i]='\0';
	
}

void text::printtext()
{
	cout<<"Given text"<<endl;
	for(int i=0; ch[i] ; cout.put(ch[i]), i++);
	cout<<endl;
}

void count::counttext()
{
	upp=low=spe=num=0;

	for(int i=0; ch[i] ; i++)
	{
		if(ch[i]>='A' && ch[i] <='Z')
			upp++;
		else if(ch[i]>='a' && ch[i] <='z')
			low++;
		else if(ch[i]>='0' && ch[i] <='9')
			num++;
		else spe++;
	}
}

void count::printresult()
{
	printtext();
	cout<<"upper   : "<<upp<<endl;
	cout<<"lower   : "<<low<<endl;
	cout<<"number  : "<<num<<endl;
	cout<<"special : "<<spe<<endl;
}

void main (void)
{
	count tp;
	cout<<"Enter String"<<endl;
	tp.readtext();
	tp.counttext();
	cout<<"Result"<<endl;
	tp.printresult();
	getch();
}
