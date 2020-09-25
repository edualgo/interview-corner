#include <bits/stdc++.h> 
using namespace std; 
void reversewords(string str) 
{ 
    stack<char>s; 
   
    for (int i = 0; i < str.length(); ++i)
	 { 
        if (str[i] != '.') 
            s.push(str[i]); 
  
        else { 
            
			while (s.empty() == false)
			 { 
                cout << s.top(); 
                s.pop(); 
            } 
            cout << "."; 
        } 
    } 
    while (s.empty() == false)
	 { 
        cout << s.top(); 
        s.pop(); 
    } 
}  
int main() 
{ 
    string str;
    cin>>str;
    reversewords(str); 
    return 0; 
}
