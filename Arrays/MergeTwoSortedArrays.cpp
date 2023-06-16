#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.

	int i=m-1, j=n-1, k=m+n-1;
	while (k >= 0) {
		if (j < 0 || (i >= 0 && arr1[i] > arr2[j])) {
			arr1[k] = arr1[i];
			i--;
		} else {
			arr1[k] = arr2[j];
			j--;
		}
	k--;
	}

	return arr1;

	
	// vector<int> res;
	// for(int i=0; i<arr1.size();i++){
	// 		if(arr1[i]==0){
	// 			continue;
	// 		}
	// 	res.push_back(arr1[i]);
	// }

	// 	for(int i=0; i<arr2.size();i++){
	// 		if(arr2[i]==0){
	// 			continue;
	// 		}
	// 	res.push_back(arr2[i]);
	// }

	// sort(res.begin(), res.end());
	// return res;


//  	int i = 0;
// 	int j = 0;
//   	vector<int> x;
// 	while (i < m && j < n) {
// 		if (arr1[i] < arr2[j]) {
// 		x.push_back(arr1[i++]);
// 	} else {
// 		x.push_back(arr2[j++]);
// 	}
// 	}
// 	while (i < m) {
// 		x.push_back(arr1[i++]);
// 	}
// 	while (j < n) {
// 		x.push_back(arr2[j++]);
// 	}
	
// 	return x;
 
	
}
