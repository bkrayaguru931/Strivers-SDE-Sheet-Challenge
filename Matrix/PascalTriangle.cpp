#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  // vector<vector<long long int>> res(n);
  // for(int i=0;i<n;i++){
  //   res[i].resize(i+1);
  //   res[i][0]=res[i][i]=1 ;
  //   for(int j=1;j<i;j++){
  //     res[i][j]=res[i-1][j-1]+res[i-1][j];
  //   }
  // }
  // return res ;

  
    vector<vector<long long int>> res(n);
    for (int i = 0; i < n; i++) {
      vector<long long int> newRow(i + 1, 1);
      for (int col = 1; col < i; col++) {
        newRow[col] = res[i - 1][col] + res[i - 1][col - 1];
      }
      res[i] = newRow;
    }
    return res;

    //both tc: O(n^2) sc: O(n^2)

}
