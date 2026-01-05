#include<iostream>
using namespace std;
bool comp(){
	
}
int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>>activites;
	int start,end,i;
	for(i=0;i<n;i++)
	{
		cin>>start>>end;
		activites.push_back({start,end});
	}
	sort(activites.begin(),activites.end(),comp);
	int cnt=1;
	int endtime = activites[0].second;
	for(i=0;i<n;i++)
    {
    	
	}
}
