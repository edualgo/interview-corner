#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class  Person{
	public:
	int val;
	int fre;
	Person(int v,int f)
	{
		val=v;
		fre=f;
	}
};
 
class Classcompare
{
	public:
	bool operator()(Person A, Person B)
	{
	if(A.fre==B.fre)
		{
			return A.val>B.val;
		}
		else 
		{
			return A.fre<B.fre;
		}
	}
};


int main()
{
	priority_queue <Person, vector<Person>, Classcompare> g;
	int t;
	cin>>t;
	while(t--)
	{
		ll z;
		int n,k;
		cin>>n>>k;
		int a[n];
		ll fre[100]={0};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			fre[a[i]]++;
		 z=k;
		for(int j=0;j<=i;j++){
			Person P(a[j],fre[a[j]]);
			g.push(P);
		}
		while(z--&&!g.empty())
		{
			Person ans=g.top();
			cout<<ans.val<<" ";
			ll r=ans.fre;
			while(r--)
			g.pop();
		}
		while(!g.empty()){
			g.pop();
		}
	}
	cout<<endl;
	}
}