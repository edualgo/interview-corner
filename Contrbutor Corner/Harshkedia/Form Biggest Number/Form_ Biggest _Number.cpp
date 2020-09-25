#include<bits/stdc++.h>
using namespace std;

int  compare(string X,string Y)
{
	string XY=X.append(Y);
	string YX=Y.append(X);
	if(XY>YX)
	return 1;
	else
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	vector<string>v;
	for(int i=0;i<n;i++)
	{ int a;
	cin>>a;
	string s =to_string(a);
		v.push_back(s);
	}
	
		sort(v.begin(),v.end(),compare);
	for(int i=0;i<n;i++)
	{
		cout<<v[i];
	}
	cout<<endl;
}
}
