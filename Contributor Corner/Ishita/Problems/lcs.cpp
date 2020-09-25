#include <iostream>
using namespace std;
void lcs(string s1,string s2,int n,int m)
{    
      int str[n+1][m+1];     
   for(int i=0;i<=n;i++)      
      str[i][0]=0;
      
   for(int j=0;j<=m;j++)
      str[0][j]=0;
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=m;j++)
           {
               if(s1[i-1]==s2[j-1])           
               str[i][j]=str[i-1][j-1]+1;
               else
               str[i][j]=0;
           }
       }
     int str1=0 ;
      for(int i=1;i<=n;i++)
      {
           for(int j=1;j<=m;j++)
            {   if(str1<str[i][j])
                str1=str[i][j];
            }
      }
      cout<<str1;
}
int main() 
{
	int t; 
	cin>>t;
	while(t--)
	{
		int n,m;
   		cin>>n>>m;
   		string s1;
   		string s2;
   		cin>>s1>>s2;
		lcs(s1,s2,n,m);
  		cout<<endl;  
	}
 return 0;
}
