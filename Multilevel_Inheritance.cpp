#include<iostream>
using namespace std;
class Person{
public:
	string name;
	int age;
	
	//Constructor
	Person(string n,int a){
		this->name=n;
		this->age=a;
		cout<<"Person Consrtuctor called"<<endl;
	}
};
class Student:public Person{
public:
	int rollno;
	
	//Constructor calls Person's Constructor
	Student(string n,int a,int r) : Person(n,a){
		this->rollno=r;
		cout<<"Student Constructor called"<<endl;
	}
};
class GradStudent : public Student{
public:
	string researchArea;
	
	//Constructor calls Student's Constructor
	GradStudent(string n,int a,int r,string ra) : Student(n,a,r){
		this->researchArea=ra;
		cout<<"GradStudent Constructor called"<<endl;
	}
	
	void display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Roll no: "<<rollno<<endl;
		cout<<"Research Area: "<<researchArea<<endl;
	}
};

int main()
{
	GradStudent gs("Lehitha",19,004,"Cse");
	gs.display();
	return 0;
}















