#include<iostream>
using namespace std;
class area
{
	float a;
	protected:
		float A(float len,float wid)
		{
			a=len*wid;
			return a;
		}
};
class perimeter:public area
{
	float per;
	protected:
		float p(float len,float wid)
		{
			per=(len+wid)*2;
			return per;
		}
};
class rectangle: public perimeter
{
	public:
		void display(float l,float w)
		{
			cout<<"Area: "<<A(l,w)<<endl;
			cout<<"Perimeter: "<<p(l,w)<<endl;
			
		}
};

int main()
{
	rectangle rec;
	float length,width;
	cout<<"ENTER LENGTH AND WIDTH: ";
	cin>>length>>width;
	
	rec.display(length,width);
}
