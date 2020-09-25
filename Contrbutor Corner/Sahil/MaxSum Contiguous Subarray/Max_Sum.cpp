#include <iostream>
using namespace std;

int Maximum(int x,int y){
  return (x>y)?x:y;
}

int Max_sum(int a[],int size){
  int sum=a[0];
  int max=a[0];
  for(int j=1;j<size;j++)
  {sum=Maximum(a[j],sum+a[j]);
  max=Maximum(max,sum);
  }
  return max;
}

int main() {
  int n;
  cin>>n;
  int arr[n];
  // Input of Array
  for(int i=0;i<n;i++)
  cin>>arr[i];

  cout<<Max_sum(arr,n);
  return 0;
}
