#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int zero=0,one=0,two=0;
   for (int i = 0; i < n; i++) {
     if (arr[i] == 0)
       zero++;
     else if (arr[i] == 1)
       one++;
     else
       two++;
   }
   int i=0,j=0;

   while(j<zero){
      arr[i++]=0;
      j++;
   }
   j=0;
   while(j<one){
      arr[i++]=1;
      j++;
   }
   j=0;
   while(j<two){
      arr[i++]=2;
      j++;
   }
 
//Dutch National Flag Algorithm
//    int low=0;
//    int mid=0;
//    int high=n-1;
//    while(mid<=high){
//       if(arr[mid] ==0){
//          swap(arr[mid],arr[low]);
//          mid++;
//          low++;
//       }else if(arr[mid]==1){
//          mid++;
//       }else{
//          swap(arr[mid],arr[high]);
//          high--;
//       }
//    } tc: O(n) sc: O(1)
}
