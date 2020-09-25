//Question Link
//https://practice.geeksforgeeks.org/problems/roman-number-to-integer/0

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int value(char c)
{
    if(c == 'I')
        return 1;
    else if(c == 'V')
        return 5;
    else if(c == 'X')
        return 10;
    else if(c == 'L')
        return 50;
    else if(c == 'C')
        return 100;
    else if(c == 'D')
        return 500;
    else if(c == 'M')
        return 1000;
    else    
    return -1;
}
int getRoman(string s)
{
    int n = s.length();
    int r = 0, x, y;
    for(int i=0; i<n; i++)
    {
        if(i == n-1)
        {
            x = value(s[i]);
            r += x;
            return r;
        }
        else
        {
            x = value(s[i]);
            y = value(s[i+1]);
            if(x >= y)
                r += x;
            else
                r -= x;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << getRoman(s) << endl;
    }
    return 0;
}    
        
        
     
    
