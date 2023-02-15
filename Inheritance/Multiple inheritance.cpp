#include<iostream>
using namespace std;

class area
{
	private: 
		float a;
		
	public:
		float A(float len,float wid)
		{
			a=len*wid;
			return a;		
		}		
};
class perimeter
{
	private:
		float per;
	public:
		float p(float len,float wid)
		{
			per=(len+wid)*2;
			return per;	
		}	
};
class rectangle: public area, public perimeter
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
	float length,width;
	cout<<"ENTER LENGTH AND WIDTH: ";
	cin>>length>>width;
	rectangle rec;
	rec.display(length,width);
}
