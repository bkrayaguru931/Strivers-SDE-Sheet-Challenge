#include <bits/stdc++.h> 
int uniqueSubstrings(string str)
{
    //Write your code here
    if (str.empty())
        return 0;   
    int n = str.length();
    unordered_map<int,int> mp;
    int i=0, j=0,len,res=0;
    for( i=0; i<str.size(); i++)
    {
        mp[str[i]]++;
          while(mp[str[i]]==2)
            {
                mp[str[j]]--;
                j++;
             }
        len=i-j+1;
       res=max(len,res);
    }

    return res; //sliding window approach

    
    // int res = INT_MIN;
    // for (int i = 0; i < n; i++) {
    //     unordered_map<char,int> mp;
    //     int j = i;        
    //     while (mp.find(str[j]) == mp.end() && j < n) {
    //         mp[str[j]] = j;
    //         j++;
    //     }
    //     res = max(res, j - i);        
    //     if (j == n)
    //         break;        
    //     i = mp[str[j]] + 1;
    // }
    
    // return res;
}
