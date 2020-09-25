#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

//------------------METHOD 1-------------------------------------
bool check(string pattern, string word) 
{ 
    if (pattern.length() != word.length()) 
        return false; 
  
    char ch[128] = { 0 }; 
  
    int len = word.length(); 
  
    for (int i = 0; i < len; i++) { 
        if (ch[pattern[i]] == 0) 
            ch[pattern[i]] = word[i]; 
        else if (ch[pattern[i]] != word[i]) 
            return false; 
    } 
  
    return true; 
} 
  

vector<string> findMatchedWords(vector<string> dict, string pattern) 
{ 
  
    vector<string> match;
    int len = pattern.length(); 
  
    for (int i=0; i < dict.size();i++) { 
        
		if (check(pattern, dict[i])){
            match.push_back(dict[i]);
		} 
    
	}
    return match;
}

//---------- METHOD 2---------------------------------
// Mapping every letter to a distinct number and making hash for every string
// and checking it with the hash of given pattern
/*
string encodeString(string str) 
{ 
    unordered_map<char, int> map; 
    string res = ""; 
    int i = 0; 
  
    for (char ch : str) { 
        if (map.find(ch) == map.end()) 
            map[ch] = i++; 

        res += to_string(map[ch]); 
    } 
  
    return res; 
} 

vector<string> findMatchedWords(vector<string> dict,string pattern)
{
    vector<string> match;
    int len = pattern.length(); 
  	string hash = encodeString(pattern); 
  
    for (int i = 0; i< dict.size();i++) { 
        if (dict[i].length() == len && encodeString(dict[i]) == hash){
			match.push_back(dict[i]);
		}
    }
    return match;
}
*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		    cin>>s[i];
		
		string tt;
		cin>>tt;
		
		vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		    cout<<res[i]<<" ";
		cout<<endl;
		
	}
}
