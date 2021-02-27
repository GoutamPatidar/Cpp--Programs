// purpose : read text and store into file 
 

#include<iostream.h>
#include<conio.h>
#include<fstream.h>

class file
{
	private :
		char ch;
	public  :	
		void readcontent(fstream);
};


void file::readcontent(fstream out)
{
	for(ch=cin.get(); ch!='$'; ch=cin.get())
		out.put(ch);
}

main (int argc, char *argv[])
{
	fstream out;
	file obj;
	
	if(argc!=2)
	{
		cout<<"usage is wrong"<<endl;
		getch();
		return;
	}

	out.open(argv[1], ios::out);

	if(out.fail())
	{
		cout<<"file Opening Error"<<endl;
		getch();
		return;
	}

	obj.readcontent(out);

	out.close();

	cout<<"information stored"<<endl;

	getch();
}  
