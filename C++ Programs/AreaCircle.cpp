// purpose : Area of circle  without input 

#include<iostream.h>
#include<conio.h>

class area
{
	private :
		float rad;
		float ar;
	public :

		area()
		{
			rad=2.31;
		}

		float areaofcircle()
		{
			ar= 3.1415 * rad * rad;
			return ar;
		}
};

void main ()
{
	area obj;
	float ar=obj.areaofcircle();
	cout<<"Area : "<<ar<<endl;
	getch();
}  
