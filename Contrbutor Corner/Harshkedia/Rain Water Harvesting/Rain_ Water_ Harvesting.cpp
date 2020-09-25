#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
	long long int n,i,j;
	cin>>n;
	if(n==0)
	{
	cout<<0<<endl;
	return 0;
	}
	long long int a[n];
	for(i=0;i<n;i++)
	{
		
		cin>>a[i];
		if(a[i]<0)
		{
			a[i]=a[i]*-1;
		}

	}
	long long int left[n];
	long long int right[n];
	long long int res=0;
	left[0]=a[0];
	right[n-1]=a[n-1];
		for(i=1;i<n;i++)
		{
			left[i]=max(left[i-1],a[i]);

		}
		for(j=n-2;j>=0;j--)
		{
			right[j]=max(right[j+1],a[j]);
			
		}
	for(i=0;i<n;i++){
		
		res+=(min(left[i],right[i])-a[i]);
	}
	cout<<res<<endl;


}
