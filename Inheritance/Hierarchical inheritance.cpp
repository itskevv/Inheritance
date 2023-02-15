#include<iostream>
using namespace std;
class rectangle
{
	protected:
	float len,wid;
	public:
		void setD(float l,float w)
		{
			len=l;
			wid=w;	
		}	
};
class area:public rectangle
{
	private:
		float a;
	
	public:
		float A()
		{
			a=len*wid;	
			return a;
		}	
};
class perimeter: public rectangle
{
	private: 
		float per;
		
	public:
		float p()
		{
			per=(len+wid)*2;
			return per;		
		}		
};

int main()
{
	float length,width;
	perimeter pr;
	area ar;
	cout<<"ENTER LENGTH AND WIDTH: ";
	cin>>length>>width;
	pr.setD(length,width);
	cout<<"Perimeter is: "<<pr.p()<<endl;
	ar.setD(length,width);
	cout<<"Area is: "<<ar.A();
	return 0;
}

