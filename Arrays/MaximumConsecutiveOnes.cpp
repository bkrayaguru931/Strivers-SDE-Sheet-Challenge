int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int j=0;//unflip when req
    int flip=0;
    int res=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            flip++;
        }
        //unflip prev 0 bcz you are exceeding limit
        while(flip>k){
            if(arr[j]==0)
            flip--;
        j++;
        }
        res=max(res,i-j+1);
        
    }
    return res;
}
