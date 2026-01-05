#include<iostream>
using namespace std;
class Base{
public:
	int data;
	void show()
	{
		cout<<"Base class function"<<endl;
	}
};

class Derived : public Base{
public:
	void display()
	{
		cout<<"Derived function"<<endl;
	}
};
int main()
{
	Derived obj;
	obj.data=10;
	obj.display();
	obj.show();
}
