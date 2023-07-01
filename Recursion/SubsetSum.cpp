void solve(int ind, vector<int> &num, int n, int sum, vector<int> &res) {
  if (ind == n) {
    res.push_back(sum);
    return;
  }     
   solve(ind+1,num,n,sum+num[ind],res); 
   solve(ind+1,num,n,sum,res);     
}

vector<int> subsetSum(vector<int> & num) {
    int n = num.size();
    vector<int> res;
    solve(0, num, n, 0, res);
    sort(res.begin(), res.end());
    return res;
  }
