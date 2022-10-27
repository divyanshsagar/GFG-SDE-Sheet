Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]<k){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }
};
