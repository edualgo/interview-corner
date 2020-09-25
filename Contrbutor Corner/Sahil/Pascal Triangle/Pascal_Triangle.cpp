#include <iostream>
using namespace std;

void PascalTriangle(int n){
  int a[n][n];
  for(int i=1;i<=n;i++){
    cout<<"[";
    for(int j=1;j<=i;j++){
      if(j==i || j==1)  // first and last elements in every row
        a[i][j]=1;
      else
        a[i][j]=a[i-1][j]+a[i-1][j-1];
    cout<<a[i][j];          // Middle elements
    if(j<i) cout<<",";

    }
    cout<<"]";
    if(i<n) cout<<",";
    cout<<endl;
  }
}

int main() 
{ 
  int k;
  cin>>k;
  PascalTriangle(k); 
  return 0;
}