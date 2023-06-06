#include <math.h>

int NthRoot(int n, int m) {
  // double root = pow(m, 1.0 / n);
  // int roundedRoot = (int)(round(root)); // Round the root value

  // if (pow(roundedRoot, n) == m) {
  //   return roundedRoot;
  // } else {
  //   return -1;
  // }


  int low =0, high=m;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(pow(mid,n)==m)
    return mid;
    else if(pow(mid,n)>m)
    high=mid-1;
    else low=mid+1;
  }
  return -1;

  //For both tc: O(logn) sc:O(1)

}
