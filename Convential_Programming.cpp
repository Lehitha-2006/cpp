#include<iostream>
using namespace std;

int calculatesum(int a , int b, int c)
{
	return a+b+c;
}

float calculateAverage(int sum , int count)
{
	return (float)sum/count;
}

int main()
{
	int n1,n2,n3;
	
	cout<<"Enter 3 numbers: ";
	cin>> n1 >> n2 >> n3;
	
	int sum=calculatesum(n1,n2,n3);
	float average = calculateAverage(sum,3);
	
	cout << "Sum = " << sum << endl;
	cout << "Average = " << average << endl;
	
	return 0;
	
}
