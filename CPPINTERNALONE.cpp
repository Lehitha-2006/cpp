#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	int i;
	for(i=0;i<v.size();i++)
	    cout<<v[i]<<" ";
	cout<<endl;
	v.pop_back();
	
	cout<<"After deleting: "<<endl;
	for(auto i : v)
	{
	    cout<<i<<" ";
	
    }
      cout<<endl;
    //List implementation
    list<int> l;
    l.push_back(100);
    l.push_front(200);
    l.push_back(250);
    
    cout<<"List elements are: "<<endl;
    for(auto it=l.begin();it!=l.end();++it)
       cout<<*it<<" ";
    cout<<endl;
    
    l.remove(100);
    cout<<"After deleting the element: "<<endl;
    for(int x:l)
        cout<<x<<" ";
    cout<<endl;
    return 0;
    
	
}
