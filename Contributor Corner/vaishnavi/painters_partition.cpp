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
/* isPossible is a function that is checking whether we can paint the whole array of board heights C  (which is the second argument to the function) by a number of painters a(third argument of function) such that 
each painter can paint maximum height of mid (first argument of function).
Basically in this section we are traversing the whole board array keeping the sum as time variable and constantly checking if time exceeds value of mid then we will need an extra painter for the work.
hence we are incrementing required painters count represented by variable(numPainters) and we check if this number is greater than the total no of available painters then it returns false representing 
that it is not possible to paint the whole board of array by a number of painters when each painter can paint at max height of value mid.,and otherwise we return true.	This function is called in our paint function whose decription is below.
*/
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
/*
#this function paint takes three argument a,b, and c where a represents the no of painters,b represents the time taken by each painter and c is the height of all boards given in the form of array.
basically we have to find the minimum time required to paint the board which we can esaily find if we find the maximum height of the board that can be painted by single painter given the no of painters is a.
So we have actually tried finding this height .paint function is using modified binary search to find this height where initially the low value will be equal to maximum height among all array values and the highest value will be equal to sum of all array value as we know that any height will lie between lowest and highest height possible.
*/
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
	    /*we call is possible fn that is checking if we have required painters that can paint the whole board where height of each board is given as array of number when a single painter can at max paint height of value mid which is passed as first argument to the isPossible function;
            If it is possible then we decrease the value of high as mid-1 so that we can check if better results exist because we are required to find minimum time which we can get if we find the minimum height painted by a single painter 
            when number of painters are fixed so we are moving high to mid-1 and again the same binary search on new values of high and low.
            But if isPossible returns false we have to increase the value of low to mid+1 as it is evident that we cannot paint the whole wall or board of arrays with the given no of painters 
            when each painter can paint height less than or equal to mid.*/
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
