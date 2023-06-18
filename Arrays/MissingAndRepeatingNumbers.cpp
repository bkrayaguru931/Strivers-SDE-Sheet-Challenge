#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	pair<int,int> ans;
    int a;
    int b;
    for(int i = 0 ; i < n ;i++){       
        if((arr[abs(arr[i])-1]) < 0 ){
            a = abs(arr[i]);
        }
        else{
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
    }
    for(int i = 0 ; i < n ;i++){
        if(arr[i] > 0){
            b = i+1 ;
            break;
        }
    }
    ans={b,a};
    return ans;
	
}
