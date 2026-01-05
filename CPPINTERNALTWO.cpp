#include<iostream>
#include<deque>

using namespace std;
int main()
{
	deque<int> dq;
	dq.push_front(20);
	dq.push_back(30);
	dq.push_front(40);
	
	cout<<"The deque elements are: "<<endl;
	for(int x : dq)
	   cout<<x<<" ";
	cout<<endl;
	
	dq.pop_back(30);
	cout<<"The deque elements after deleting are: "<<endl;
	for(int x : dq)
	   cout<<x<<" ";
	cout<<endl;
	
	dq.push_front(100);
	dq.push_back(200);
	cout<<"The deque elements after adding elements are: "<<endl;
	for(int x : dq)
	   cout<<x<<" ";
	cout<<endl;
	return 0;	
	
	
}
