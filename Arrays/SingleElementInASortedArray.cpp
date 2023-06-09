int singleNonDuplicate(vector<int>&arr)
{
	//Writeyourcodehere
	//int ele=0;
	//for(int i=0;i<arr.size();i++){
	//	ele=ele^arr[i];
	//}
	
	//return ele;

	int n=arr.size();
	int low=0;
	int high=n-2;

	while(low<=high){
		int mid=(low+high)/2;
		
		if(mid%2==0){
			if(arr[mid]!=arr[mid+1])
				high=mid-1;
			else
				low=mid+1;
		}else{
			if(arr[mid]==arr[mid+1])
				high=mid-1;
			else
				low=mid+1;
		}
	}

	return arr[low];
}
