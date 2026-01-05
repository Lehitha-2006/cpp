#include<iostream>
using namespace std;
class Rectangle
{
	public:
		int length;
		int width;
	Rectangle(int l,int w)
	{
		length = l;
		width = w;
	}
	void area()
	{
	cout<<"The Area of rectangle: "<<(length*width)<<endl;
    }
	void perimeter()
	{
	cout<<"The Perimeter of rectangle: "<<2*(length+width)<<endl;
    }
};
int main()
{
	Rectangle r(10,20);
	r.area();
	r.perimeter();
}
