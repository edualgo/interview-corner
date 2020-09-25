#include <bits/stdc++.h>
using namespace std;

//-------------- Naive Approach-----------------
/*
int transitionPoint(int arr[], int n) {
    for(int i=0; i<n ;i++){
		if(arr[i]==1){
	  		return i;
		}
	}
	
    return -1; 
}
*/
// ------------- Optimised Approach-------------------
int transitionPoint(int arr[], int n) 
{ 
    int l = 0, u = n-1; 
  
    while (l <= u) 
    { 
        int mid = (l + u)/2; 
  
        if (arr[mid] == 0) 
            l = mid+1; 
  
        else if (arr[mid] == 1) 
        { 
            if (arr[mid-1]==0) 
                return mid; 
  
            u = mid-1; 
        } 
    } 
    return -1; 
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
