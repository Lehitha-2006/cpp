#include<iostream>
using namespace std;
class Calculator
{
	public:
		int a;
		int b;
	Calculator(int a,int b)
	{
		this->a=a;
		this->b=b;
	}	
	inline int add()
	{
		return a+b;
	}
	inline int Subtraction()
	{
		return a-b;
	}
	inline int multiply()
	{
		return a*b;
	}
};
int main()
{
	Calculator c(2,5);
	cout<<"The addition of two integers: "<<c.add()<<endl;
	cout<<"The Subtraction of two integers: "<<c.Subtraction()<<endl;
	cout<<"The Multiplication of two integers: "<<c.multiply()<<endl;
}










