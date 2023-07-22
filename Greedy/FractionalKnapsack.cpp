#include<bits/stdc++.h>
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    vector<pair<double,int>>v;
    for(int i=0;i<n;i++){
        double value=items[i].second;
        double weight=items[i].first;
        v.push_back({value/weight,i});
    }
    sort(v.begin(),v.end());
         double res=0;
         for(int i=n-1;i>=0;i--)
         {
             int idx=v[i].second;
             if(items[idx].first<w){
                 w=w-items[idx].first;
                 res=res+items[idx].second;
             }
             else{
                 res=res+(v[i].first*w);
                 break;
             }
         }
         
         return res;
}
