//Question Link
//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0

#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int index=0;
	for(int i=0;i<t;i++)
	{
		int n;
		cin >> n;
		int A[n],B[n];
		for(int j=0;j<n;j++)
		{
			cin >> A[j];
		}
		for(int j=0;j<n;j++)
		{
			if (A[j]==0)
			{
				B[index]=A[j];
				index++;
			}
		}
		for(int j=0;j<n;j++)
		{
			if (A[j]==1)
			{
				B[index]=A[j];
				index++;
			}
		}
		for(int j=0;j<n;j++)
		{
			if(A[j]==2)
			{
				B[index]=A[j];
				index++;
			}
		}
	}
	for(int j=0;j<n;j++)
	{
		cout << B[j] << " ";
		cout << "\n";
	}
	return 0;

}
