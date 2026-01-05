#include<iostream>
using namespace std;
class person{
	private:
		float balance;
	protected:
		int accno;
	public:
		string name;
	person(string n)
	{
		name=n;
	}
	
	  void Holder_accno(int a)
	  {
	  	  accno = a;
	  }
	  void Holder_balance(float b)
	  {
	  	  balance = b;
	  }
	  
	  float get_balance()
	  {
	  	return balance;
	  }
	  int get_accno()
	  {
	  	return accno;
	  }
	  
};
int main()
{
	person p("LEHITHA");
	p.Holder_accno(24004);
	p.Holder_balance(80000);
	cout<<"Account Holder name: "<<p.name<<endl;
	cout<<"Account no: "<<p.get_accno()<<endl;
	cout<<"Account balance: "<<p.get_balance()<<endl;
	

	
}
	
