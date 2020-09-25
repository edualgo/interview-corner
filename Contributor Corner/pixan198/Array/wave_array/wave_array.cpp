#include <iostream>
#include <algorithm>
#include <vector>

//using namespace std;

using std::cin;
using std::cout;
using std::vector;
using std::swap;
using std::sort;

vector<int> wave(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i+=2)
        if(i+1<A.size())
            swap(A[i],A[i+1]);
    return A;
}

int main(){
  
  int n, temp;
  vector<int> A;
  
  cin >> n;
  
  for( int i = 0; i < n; i++ ){
    cin >> temp;
    A.push_back(temp);
  }
  
  A = wave(A);
  
  for( int i = 0; i < n; i++ ){
    cout << A[i];
  }
  
  return 0;
}
