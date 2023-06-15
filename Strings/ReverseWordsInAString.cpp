#include <bits/stdc++.h>

string reverseString(string &str){
	// Write your code here.
	// string result;
    // int i = 0;
    // int n = s.length();

    // while(i < n){
    //     while(i < n && s[i] == ' ') i++;
    //     if(i >= n) break;
    //     int j = i + 1;
    //     while(j < n && s[j] != ' ') j++;
    //     string sub = s.substr(i, j-i);
    //     if(result.length() == 0) result = sub;
    //     else result = sub + " " + result;
    //     i = j+1;
    // }
    // return result;


	stack<string> st;
	for(int i=0;i<str.size();i++){
		string word="";
		while(str[i]!=' ' && i<str.size()){
			word+=str[i];
			i++;
		}
		if(!word.empty()){
			st.push(word);
		}
	}
	string ans="";
	while(!st.empty()){
		ans+=st.top();
		ans.push_back(' ');
		st.pop();
	}
	return ans;
}
