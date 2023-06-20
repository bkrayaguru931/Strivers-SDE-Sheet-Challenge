int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int i=0;//just move
    int j=0;//unflip when req
    int res=0;
    int flip=0;
    while(i<n){
      if (arr[i]==0) {
        flip++;
      }
      //unflip prev 0 
      while (flip>k) {
        if (arr[j] == 0)
          flip--;
        j++;
      }
        res=max(res,i-j+1);
        i++;
    }

    return res;
}
