#include<iostream>
using namespace std;

class Image{
	int height,width;
	
	public:
		Image(int h=0, int w=0)
		{
			height=h;//100,200
			width=w;//50,15
		}
		
		Image operator -(Image &obj)
		{
			Image result;//obect result
			
					//100			200
			result.height=height - obj.height;
			
			result.width=width - obj.width;
			
			return result;
		}
		void print()
		{
			cout<<"\n"<<height<<"*"<<width;
		}
};

main()
{
	Image I1(100,50), I2(200,15);//object,object2
	
	Image I3= I1 - I2; //object3
	
	I3.print();
}
