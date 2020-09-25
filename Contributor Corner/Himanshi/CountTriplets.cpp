//Question Link
//https://practice.geeksforgeeks.org/problems/count-the-triplets/0

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	    int count = 0;
	    for(int i=n-1; i>=1;i--)
	    {
	        int j=0;
	        int k=i-1;
	        while(j<k)
	        {
	            if(arr[j]+arr[k]==arr[i])
	            {
	                count ++;
	                j++;
	                k--;
	            }
	            else if(arr[j]+arr[k]>arr[i])
	            {
	                k--;
	            }
	            else if(arr[j]+arr[k]<arr[i])
	            {
	                j++;
	            }
	        }
	    }
	    if (count!=0)
	   
	    {   
	        cout << count << endl;
	    }
	    else
	    {
	        cout << -1 << endl;
	    }
	    
	}
	
	return 0;
}
