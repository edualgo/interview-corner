#include<bits/stdc++.h>
using namespace std;
void missing_integer(vector<int>a)
{
	int key=1,k;
	sort(a.begin(),a.end());
	for(int i=0;i<a.size();i++)
	{
		if(a[i]>0)
		{
			if(a[i]>key)
			  k=key;
			else if(a[i]==key)
				k=key++;

		}
	}
	cout<<k;
}
int main()
{
	cout<<"enter the size of array"<<endl;
	int n;
	cin>>n;
	vector<int>a;
	//Enter the array elements
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;
		a.push_back(no);
	}
    missing_integer(a);
    return 0;
}
