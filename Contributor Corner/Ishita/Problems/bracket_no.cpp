#include <iostream>
#include<stack>
#include<vector>
using namespace std;

void print(vector<int> a){
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void my(string s){
	stack<int> st;
	vector<int> a;
	int count=1;
	for(int i=0;i<s.length();i++){  
		if(s[i]=='('){ //opening bracket
			a.push_back(count);
			st.push(count++);
		}
		else if(s[i]==')'){ //closing bracket
			a.push_back(st.top());
			st.pop();
		}
	}
	print(a);
}

int main()
{
	int t,n,item;

	cin>>t;
	while(t--)
	{
	string s;
    cin>>s;
	my(s);
	}
	
	return 0;
}
