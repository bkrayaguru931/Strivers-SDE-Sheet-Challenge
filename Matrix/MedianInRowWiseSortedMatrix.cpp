#include <bits/stdc++.h>
// int median(vector<vector<int>> &arr, int m, int n) {
    // Write your code here.
    // int med[row * col];
    // int idx=0;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j=0; j < col; j++)
    //     {
    //     med[idx] = arr[i][j];
    //     idx++;
    //     }
    // }
    // return med[(row * col) / 2];

    
// }

int cntEleLessOrEqual(vector<vector<int>>& arr, int t) {
    int cnt = 0;
    int r = arr.size();
    int c = arr[0].size();
    int row = r - 1;
    int col = 0;
    while (row >= 0 && col < c) {
        if (arr[row][col] <= t) {
            cnt += (row + 1);
            col++;
        } else {
            row--;
        }
    }
    return cnt;
}
int median(vector<vector<int>>& arr, int r, int c) {
    int l = INT_MAX;
    int h = INT_MIN;
    for (int i = 0; i < r; i++) {
        l = min(l, arr[i][0]);
        h = max(h, arr[i][c - 1]);
    }
    while (l <= h) {
        int mid = l + (h - l) / 2;
        int cnt = cntEleLessOrEqual(arr, mid);

        if (cnt <= (r * c) / 2) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    return l;
}
