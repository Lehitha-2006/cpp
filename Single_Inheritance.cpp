#include<iostream>
using namespace std;
class Person{
public:
	string name;
	int age;
	Person(string name , int age){
		cout<<"Parent called\n";
		this->name=name;
		this->age=age;
	}
};
class Student:public Person{
public:
	int rollnum;
	Student(string name,int age,int roll) : Person(name,age){
		cout<<"Child is called\n";
		this->rollnum=roll;
	}
};

int main()
{
	Person p1("Raja",30);
	Student s1("Lehitha",19,004);
	cout<<s1.name<<endl;
	cout<<p1.name;
	
}
