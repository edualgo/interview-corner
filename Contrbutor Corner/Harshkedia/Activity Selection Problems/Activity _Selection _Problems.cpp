#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

bool compare(pair<int,int>p1,pair<int,int>p2)// compartor
{
	return p1.second<p2.second;
}

int main()
{
	ll  n;
	cin>>n;
	vector<pair<int,int>>v;
	for(ll i=0;i<n;i++)
	{
		ll x,c;
		cin>>x>>c;
		v.push_back(make_pair(x,c));
	}
	sort(v.begin(),v.end(),compare);
	ll c=0;
	for(ll i=1;i<n;i++)
	{
      if(v[i-1].second>v[i].first)
	  {
		  v[i].first=v[i-1].first;
		  v[i].second=v[i-1].second;
		  c++;
	  }
	}
	cout<<n-c<<endl;

}