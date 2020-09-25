#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the size of 2D array"<<endl;
	int n;
	cin>>n;
	int a[n][n];
	cout<<"Enter the array elements"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
	//Rotation by 90
	cout<<"Rotated array"<<endl;
	for(int j=0;j<n;j++)
	{
		for(int i=n-1;i>=0;i--)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
