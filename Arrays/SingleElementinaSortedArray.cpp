int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int l=0;
    int h=arr.size()-2;
    while(l<=h){
        int mid=(h+l)/2;
        if(arr[mid]==arr[mid^1]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return arr[l];
}
