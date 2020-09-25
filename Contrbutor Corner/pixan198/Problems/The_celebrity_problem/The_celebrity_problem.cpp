#include<bits/stdc++.h>
using namespace std;
#define MAX 501

//---------------Naive Approach----------------
/*
int getId(int M[MAX][MAX], int n)
{
    int in[n]={0},out[n]={0}; 
      
    for(int i=0; i<n; i++) 
    { 
        for(int j=0; j<n; j++) 
        { 
            int x = M[i][j]; 
              
            out[i]+=x; 
            in[j]+=x; 
        } 
    } 
      
    for(int i=0; i<n; i++) {
    	if(in[i] == n-1 && out[i] == 0) { 
        	return i;
    	}
    }
      
    return -1;
}*/

//------------------Optimised Approach-----------------
int getId(int M[MAX][MAX], int n)
{
    int a = 0; 
    int b = n - 1; 
  
    while (a < b) 
    { 
        if (M[a][b]){
            a++; 
        }
        else{
            b--;
		} 
    } 
  
    for (int i = 0; i < n; i++) {
	 
        if ( (i != a) && (M[a][i] || !M[i][a]) ){
            return -1; 
        }
    } 

    return a; 
}

int main()
{
    int T;
    cin>>T;
    int M[MAX][MAX];
    while(T--)
    {
        int N;
        cin>>N;
        memset(M,0,sizeof M);
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>M[i][j];
            }
        }
        cout<<getId(M,N)<<endl;

    }
}
