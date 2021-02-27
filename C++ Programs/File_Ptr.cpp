purpose : read text and store into file  Using Pointer


#include<iostream.h>
#include<conio.h>
#include<fstream.h>

class file
{
	private :
		char ch;
	public  :	
		void readcontent(fstream *);
};


void file::readcontent(fstream *out)
{
	char *p=&ch;
	for(*p=cin.get(); *p!='$'; *p=cin.get())
		out->put(*p);
}

void main (int argc, char *argv[])
{
	fstream *out=new fstream;
	file obj, *p;
	p=&obj;
	
	if(argc!=2)
	{
		cout<<"usage is wrong"<<endl;
		getch();
		return;
	}

	out->open(argv[1], ios::out);

	if(out->fail())
	{
		cout<<"file Opening Error"<<endl;
		getch();
		return;
	}

	p->readcontent(out);

	out->close();

	cout<<"information stored"<<endl;

	getch();
}
