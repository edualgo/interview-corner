#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]==0)
				c++;
			else
		    {
		    	
		    	break;
			}
		}
		cout<<c;
	}
	return 0;
}
