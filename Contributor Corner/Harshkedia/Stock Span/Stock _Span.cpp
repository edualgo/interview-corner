#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	stack<ll>s;
	s.push(0);
	cout<<1<<" ";
	for(ll i=1;i<n;i++)
	{
		ll z=s.top();
		ll p=a[z];
		if(p>a[i])
		{
			cout<<i-z<<" ";
		s.push(i);
		}
		else
		{
			while(p<=a[i]&&s.size()>=1)
			{
				s.pop();
				if(!s.empty())
				{
				z=s.top();
				p=a[z];
				}
			}
			if(s.empty())
			cout<<i+1<<" ";
			else 
			{
				cout<<i-s.top()<<" ";
			}
			s.push(i);
			
		}
			
	}
	cout<<endl;
}