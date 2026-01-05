class Teacher{
public:
	string name;
	string dept;
	double salary;
	string subject;
	void ChangeDept( string s){
		dept = s;
	}
};
int main()
{
	Teacher T1;
	Teacher T2;
	T1.name= "Ashok";
	T1.dept = "CS";
	T1.ChangeDept("Thub");
	 cout << T1.dept<< endl;
	T2.name="Pavan";
}
