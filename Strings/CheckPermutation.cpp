#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    // sort(str1.begin(),str1.end());
    // sort(str2.begin(),str2.end());
    // if(str1==str2)
    //     return true;
    // else
    //     return false;  //🥴
    int s1=str1.length();
    int s2=str2.length();
     vector<int> v(26,0);
    if(s1!=s2) 
        return false;
    for(int i=0;i<s1;i++){
        v[str1[i]-'a']++;
        v[str2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(v[i]!=0) 
        return false;
    }

    return true;
}
