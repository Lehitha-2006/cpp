#include<iostream>
using namespace std;

class student{
	private:
		int rollno;
		string name;
	public:
		
		void setDetails(int r,string n)
		{
			rollno = r;
			name = n;
		}
		void display()
		{
			cout<<"Roll no: "<<rollno<<endl;
			cout<<"Name: "<<name<<endl;
		}
};
int main()
{
	student s1,s2;
	
	s1.setDetails(004,"Lehitha");
	s2.setDetails(182,"Neeraja");
	
	cout<<"Student 1 Details: "<<endl;
	s1.display();
	cout<<endl;
	
	cout<<"Student 2 Details: "<<endl;
	s2.display();
	cout<<endl;
	
	return 0;
}
