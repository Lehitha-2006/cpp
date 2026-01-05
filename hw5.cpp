#include<iostream>
using namespace std;
class employee
{
	public:
	static int count;
	employee()
	{
	count++;
	}
	static get_count()
	{
		cout<<"the count of objects is:"<<count<<endl;
	}
	
};
int employee::count=0;
int main()
{
  employee e1;
  employee e2;
  employee e3;
  employee::get_count();
}
