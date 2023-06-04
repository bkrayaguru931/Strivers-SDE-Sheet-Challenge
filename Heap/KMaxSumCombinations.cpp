#include <bits/stdc++.h> 
using namespace std;
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
	vector<int> res;
	priority_queue<int> pq;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		pq.push(a[i]+b[j]);
	}
	}
	for(int i=0;i<k;i++){
		res.push_back(pq.top());
		pq.pop();
	}
	return res;
}//TC: O(n^2 log(n^2)) SC: O(n^2)
