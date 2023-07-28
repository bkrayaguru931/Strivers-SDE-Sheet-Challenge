int calculateMinPatforms(int at[], int dt[], int n) {
  // Write your code here.
  sort(at,at+n);
  sort(dt,dt+n);
  int i=0,j=0,temp=0,res=0;
  while (i<n and j<n) {
    if (at[i]<=dt[j]) {
      temp++;
      i++;
    }
    else {
      temp--;
      j++;
    }
    res=max(res,temp);
  }
  return res;
}
