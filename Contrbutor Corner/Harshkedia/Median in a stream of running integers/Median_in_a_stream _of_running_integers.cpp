#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod  1000000007

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll n;
    cin>>n;
    ll d;
    cin>>d;
    ll med=d;
    cout<<med<<" ";
    n--;
    priority_queue <int>leftheap;//max heap 
    priority_queue <int, vector<int>, greater<int>>rightheap;// min heap
    leftheap.push(d);
    
// create two heaps max and min heap and do operation 
// total 3 conditons are arising from this 
    while(n>0)
    {
         cin>>d;
         if(leftheap.size()>rightheap.size())
         {
             if(d<med)
             {
                 ll p=leftheap.top();
                 leftheap.pop();
                 rightheap.push(p);
                 leftheap.push(d);
             }
             else 
             {
                 rightheap.push(d);
             }
             med=(leftheap.top()+rightheap.top())/2;
         }
         else  if(leftheap.size()==rightheap.size())
          {
              if(d<med)
             {
                 leftheap.push(d);
                 med=leftheap.top();
             }
             else 
             {
                 rightheap.push(d);
                 med=rightheap.top();
             }
          }
          else 
          {
               if(d>med)
             {
                 ll p=rightheap.top();
                 rightheap.pop();
                 leftheap.push(p);
                 rightheap.push(d);
             }
             else 
             {
                 leftheap.push(d);
             }
             med=(leftheap.top()+rightheap.top())/2;
             
          }
          cout<<med<<" ";
          n--;
          
    }
    cout<<endl;
}
  
}