#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class Phanso 
{
	private:
		int ts;
		int ms;
	public:
		friend void rutgon(Phanso);
		Phanso(int tu=0, int mau=1)
		{
			ts=tu;
			ms=mau;
		}
		Phanso(const Phanso &ps)
   	 	{
        ts=ps.ts;
        ms=ps.ms;
    	}
		Phanso operator * (Phanso tb)
		{
			Phanso kq;
			kq.ts=ts * tb.ts;
			kq.ms=ms * tb.ms;
			return kq;	
		}
		Phanso operator / (Phanso tb)
		{
			Phanso kq1;
			kq1.ts=ts * tb.ms;
			kq1.ms=ms * tb.ts;
			return kq1;	
		}
		void show()
		{
		
			cout<<ts<<"/"<<ms<<endl;
		}

		    
     	
		
};
int main()
{
	Phanso p1(1,2);
	Phanso p2(2,3);
	Phanso p3(3,2);
	Phanso p4 = (p1*p2) / 2;
	p4.show();
	Phanso p5 = p1*p2/p3;
	p5.show();
	return 0;
}
