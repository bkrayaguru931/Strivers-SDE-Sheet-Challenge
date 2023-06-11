#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
// 	vector<vector<int>> res;
//    sort(arr.begin(), arr.end());
//    for (int i=0; i<n; i++) {
//     if (i !=0 && arr[i]==arr[i - 1]) 
// 	continue;

//     for (int j=i+1; j<n;j++) {
//       if (j!=i+1 && arr[j]==arr[j-1]) 
// 	  continue;

//       for (int k=j+1; k<n;k++) {
//         if (k!=j+1 && arr[k]==arr[k - 1]) 
// 		continue;

//         if (arr[i]+arr[j]+arr[k]==K) {
//          res.push_back({arr[i], arr[j], arr[k]});
//        }
//      }
//    }
//  }
//  return res;//tc: O(n^3)



    vector<vector<int>>res;
    sort(arr.begin(),arr.end());
    
    for(int i = 0; i<n-2; i++){        
        if(i==0 || i>0 && arr[i]!=arr[i-1]){
            int low = i+1;
            int high = n-1;
            int target = K-arr[i];
            
            while(low<high){
                if(arr[low]+arr[high]==target){
                    vector<int> temp={arr[i], arr[low], arr[high]};
                    res.push_back(temp);
                    while(low<high && arr[low]==arr[low+1]) 
			low++;
                    while(low<high && arr[high]==arr[high-1]) 
			high--;
                    
                    low++;
                    high--;
                    
                }
                
                else if(arr[low]+arr[high]<target) low++;
                else high--;   
            }
        }
    }
    
    return res;//tc: O(n^2)
}
