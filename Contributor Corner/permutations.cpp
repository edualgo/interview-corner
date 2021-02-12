/* Question: To find Permutations of a given string.

Sample Test Case:
abc
Output:
abc
acb
bac
bca
cab
cba

Permutations count:6
*/
#include<cstring>
#include<iostream>
#include<vector>
using namespace std;
string smallAns; // for storing a permutation
int permutations(string c,vector<bool>&visited,int idx,string smallAns)
{
    if(idx>=c.length())
    {
        cout<<smallAns<<"\n";
        return 1;
    }
    int count=0;
    for(int i=0;i<c.length();i++) 
    {
        if(visited[i]==0)
        {
            visited[i]=1;
            count+=permutations(c,visited,idx+1,smallAns+c[i]);
            visited[i]=0;
            //smallAns.pop_back();
        }
    }
    return count;
}

int main()
{
    string c;
    cin>>c; //Enter the string
    vector<bool> visited(c.length(),0); // to block elements depth wise
    cout<<"\nPermutations count:"<<permutations(c,visited,0,smallAns);
}