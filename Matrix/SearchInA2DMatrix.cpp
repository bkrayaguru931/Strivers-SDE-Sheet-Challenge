bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(), n=mat[0].size();
        // for(int i=0;i<m;i++){
        //        for(int j=0;j<n;j++){
        //         if(mat[i][j]==target)
        //         return true;
        // } 
        // }
        // return false;//TC: O(n*m)

        int low=0, high=m*n-1;
        while(low<=high){
                int mid=low+(high-low)/2;
                if(target==mat[mid/n][mid%n]){
                        return true;
                }
                else{
                        if(target>mat[mid/n][mid%n])
                        low=mid+1;
                        else high=mid-1;
                }
        }
        return false;//TC: O(log(n*m))

}
