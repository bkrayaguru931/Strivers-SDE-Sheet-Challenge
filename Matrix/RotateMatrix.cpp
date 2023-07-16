class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
		    int n = matrix.size();
        // for (int i=0; i<n; i++) {
        //        for (int j=i; j<n; j++) {
        //        swap(matrix[i][j], matrix[j][i]);
        //     }
        // }
        // for (int i=0; i<n; i++) {
        //     int l=0;
        //     int r=matrix.size()-1;
        //     while(l<r){
        //         swap(matrix[i][l],matrix[i][r]);
        //         l++;
        //         r--;
        //     }
        // }    
      
//4 pointer (it worked hiihiiihiiii)
        for (int layer=0; layer<n/2; layer++) {
            int l=layer;
            int r=n-1-layer;
            for (int i=l; i<r; i++) {
                int diff=i-l;

                int temp=matrix[l][i];
                matrix[l][i]=matrix[r-diff][l];
                matrix[r-diff][l]=matrix[r][r-diff];
                matrix[r][r-diff]=matrix[i][r];
                matrix[i][r]=temp;  
            }
        }
    }
};
