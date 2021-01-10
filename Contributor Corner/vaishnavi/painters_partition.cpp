// link :https://www.interviewbit.com/problems/painters-partition-problem/
/*problem - statement 
Given 2 integers A and B and an array of integars C of size N.

Element C[i] represents length of ith board.

You have to paint all N boards [C0, C1, C2, C3 … CN-1]. There are A painters available and each of them takes B units of time to paint 1 unit of board.

Calculate and return minimum time required to paint all boards under the constraints that any painter will only paint contiguous sections of board.

2 painters cannot share a board to paint. That is to say, a board
cannot be painted partially by one painter, and partially by another.
A painter will only paint contiguous boards. Which means a
configuration where painter 1 paints board 1 and 3 but not 2 is
invalid.

Sample test cases:
Input 1:
    A = 2
    B = 5
    C = [1, 10]
Output 1:
    50
Explanation 1:
    Possibility 1:- same painter paints both blocks, time taken = 55units
    Possibility 2:- Painter 1 paints block 1, painter 2 paints block 2, time take = max(5, 50) = 50
    There are no other distinct ways to paint boards.
    ans = 50%10000003

Input 2:
    A = 10
    B = 1
    C = [1, 8, 11, 3]
Output 2:
    11
    
*/

//solution by binary search algorithm
#include<bits/stdc++.h>
using namespace std;
bool isPossible(int mid, vector<int> &c, int a) {
    long long Time = 0, numPainters = 1, n = c.size();
    for(int i = 0; i < n; i++) {
        Time += c[i];
        if(Time > mid) {
            Time = c[i];
            numPainters++;
            if(numPainters > a) return false;
        }
    }
    return true;
}

int paint(int A, int B, vector<int> &C) {
    int n = C.size();
    long long maxTime = 0;
    long long lo = 0, hi, mid, ans;
    for(int i = 0; i < n; i++){
        maxTime += C[i];
        lo = max(lo,(long long)C[i]);
    } 
    hi = maxTime;
    while(lo <= hi) {
        mid = lo + (hi - lo) / 2;
        if(isPossible(mid, C, A)) {
            ans = mid;
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
    return (ans * B) % 10000003;
}
int main() 
{ 
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    vector<int>arr;
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++) {
    	int a;
    	cin>>a;
    	arr.push_back(a);
	}
   
    int k = 3; 
    int t=paint(k,1,arr);
    cout<<t<<endl;
  
    return 0; 
} 
