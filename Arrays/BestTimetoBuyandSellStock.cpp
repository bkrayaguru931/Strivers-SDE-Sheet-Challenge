#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
      int maxi=0;
      int mini=prices[0];
      int c=0;
      for(int i=0;i<prices.size();i++){
          c=prices[i]-mini;
          maxi=max(maxi,c);
          mini=min(prices[i],mini);
      }

      return maxi;
}
