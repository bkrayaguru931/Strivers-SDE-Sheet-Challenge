#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    //  Write your code here.
    int i;
    for (i=n-1;i>=0;i--) {
      if (p[i]>p[i-1]) 
      break;
    }
    if(i==0){
        reverse(p.begin(),p.end());
        return p;
    }
    for(int j=n-1;j>=0;j--){
        if(p[j]>p[i-1]){
            swap(p[j],p[i-1]);
            sort(p.begin()+i,p.end());
            break;
        }
    }
    return p;
}
