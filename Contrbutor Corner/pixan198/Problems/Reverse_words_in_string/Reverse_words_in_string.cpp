#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) 
{ 
    int start = 0; 
	
	for (int end = 0; end < s.length(); end++) { 
	
		if (s[end] == '.') { 
			reverse(s.begin() + start, s.begin() + end); 
			start = end + 1; 
		} 
	
	} 
	
	reverse(s.begin() + start, s.end()); 
	
	reverse(s.begin(), s.end());
	 
	return s;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        cout<<reverseWords(s)<<endl;
    }
} 
