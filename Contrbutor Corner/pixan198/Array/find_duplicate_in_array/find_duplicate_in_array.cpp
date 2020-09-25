#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

//using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::vector;


int repeatedNumber(const vector<int> &A) {
    
    vector<int> count(A.size()-1, 0);
    
    for(int i=0; i<A.size(); i++){
        count[A[i]-1]++;
        if(count[A[i]-1]>1) return A[i];
    }
    return -1;
}
int repeatedNumberOptimized(vector<int> &A) 
{ 
    int Tortoise = A[0]; 
    int Hare = A[0]; 
    
    while (1) { 
  
        Tortoise = A[Tortoise]; 
        Hare = A[A[Hare]];
        
        if (Tortoise == Hare) 
            break; 
    } 
  
    Tortoise = A[0]; 
    
    while (Tortoise != Hare) { 
        Tortoise = A[Tortoise]; 
        Hare = A[Hare]; 
    } 
   
    return Tortoise; 
} 

int main(){
  
  int n, temp;
  vector<int> A;
  clock_t start, end;
  
  cin >> n;
  
  for( int i = 0; i < n; i++ ){
    cin >> temp;
    A.push_back(temp);
  }
	start = clock();
    cout << repeatedNumber(A) << endl;
    end = clock();
    cout << "Runtime(normal) = " << double(end - start) / double(CLOCKS_PER_SEC) << endl;
    
  	start = clock();
    cout << repeatedNumberOptimized(A) << endl;
    end = clock();
    cout << "Runtime(normal) = " << double(end - start) / double(CLOCKS_PER_SEC) << endl;
  
  
  return 0;
}
