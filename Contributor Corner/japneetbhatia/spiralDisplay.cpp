/* AIM: Spiral Display of elements of 2-D array 
SAMPLE CASE : 
Suppose the array is :
11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
Output :
11 21 31 32 33 34 35 25 15 14 13 12 22 23 24 */
// Program code :
#include<iostream>
#include<vector>
using namespace std;
void PrintSpiral(vector <vector<int>>& arr)
{
    int n = arr.size();
    int m = arr[0].size();
    int count = m*n;
    int rmin = 0;
    int cmin = 0;
    int rmax = n-1;
    int cmax = m-1;    
    while(count!=0){
        for(int r = rmin; r <= rmax && count > 0; r++){
                cout<<arr[r][cmin]<<"\t";
                count--;
            }
            cmin++;            
            for(int c = cmin; c <= cmax && count > 0; c++){
                cout<<arr[rmax][c]<<"\t";
                count--;
            }
            rmax--;
            for(int r = rmax; r >= rmin && count > 0; r--){
                cout<<arr[r][cmax]<<"\t";
                count--;
            }
            cmax--;
            for(int c = cmax; c >= cmin && count > 0; c--){
                cout<<arr[rmin][c]<<"\t";
                count--;
            }
            rmin++;
   }
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    vector <vector<int>> arr(n,vector<int>(m,0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    PrintSpiral(arr);
    return 0;
}
