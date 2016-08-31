#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class HV
{
	private :
		int x, y;
		int a;
	public :
		HV()
		{
		}
		HV(int tx, int ty, int ta)
		{
			x=tx;
			y=ty;
			a=ta;
		}
		void show()
		{
			cout<<"hinh vuong:"<<x<<","<<y<<","<<a<<endl;
		}
		int area()
		{
			return a*a;
		}
		friend class HCN;
};
/*class HCN
{
	private:
		int x,y,a,b;
	public:
		HCN()
		{
		}
		HCN(int tx, int ty, int ta, int tb)
		{
			x=tx;
			y=ty;
			a=ta;
			b=tb;
		}
		void convert(HV s)
		{
			x=s.x;
			y=s.y;
			a=s.a;
			b=s.b;
		}
		int area()
		{
			return a*b;
		}
};*/
int main()
{
	HV s(1,2,3);
	/*HCN r1(4,3,5,6);
	r1.show();
	r1.convert(s);*/
	cout<<"area:"<<s.area()<<endl;
}

