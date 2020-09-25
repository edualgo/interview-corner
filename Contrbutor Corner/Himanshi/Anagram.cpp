//Question Link
//https://practice.geeksforgeeks.org/problems/anagram/0

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long int i,j,n=0;
        string s1,s2;
        cin>>s1>>s2;
        
        
        if(s1.length()==s2.length())
        {
            
            for(i=0;i<s1.length();i++)
            {
                
                for(j=0;j<s2.length();j++)
                {
                    if(s1[i]==s2[j])
                    {
                        n++;
                        break;
                    }
                    
                    
                }
            }
            
            
        }
        
        else 
        {
            n=0;
        }
        
        if(n==s1.length())
            cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
        
    }
	
	return 0;
        
}
