#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

typedef pair<int,pair<int,int>>node;

int main()
{
	ll k,n;
	cin>>k>>n;
	ll v[k][n];
	vector<int>result;
	for(ll i=0;i<k;i++)
	{
		for(ll j=0;j<n;j++)
		{
		cin>>v[i][j];
		}
	}
	priority_queue <node, vector<node>, greater<node>> g; 
	for(ll i=0;i<k;i++)// for the first three elements 
	{
		g.push({v[i][0],{i,0}});
	}

	while(g.size()>0)
	{
		node curr=g.top();
		ll value=curr.first;
		ll x=curr.second.first;
		ll y=curr.second.second;
	    result.push_back(value);
		g.pop();
		if(y+1<n)
		{
			g.push({v[x][y+1],{x,y+1}});
		}

	}
	for(ll i=0;i<result.size();i++)
	{
		cout<<result[i]<<" ";
	}
	cout<<endl;

}