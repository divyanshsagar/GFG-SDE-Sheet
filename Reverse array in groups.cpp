Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

Note: If at any instance, there are no more subarrays of size greater than or equal to K, then reverse the last subarray (irrespective of its size).

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        for(int i=0;i<n;i=i+k){
            int start=i;
            int end=i+k-1;
            if(end>n-1){
                end=n-1;
            }
            while(start<=end){
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
        }
    }
};
