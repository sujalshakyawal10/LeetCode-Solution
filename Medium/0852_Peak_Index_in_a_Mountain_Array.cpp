class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=1,n=arr.size()-1,end=n-2,ans;
        
        if(arr[n-1]>arr[n-2]) return n-1;

        if(arr[0]>arr[1]||arr[n]>arr[n-1]) return 0;

        while(st<=end){
            int mid = st + (end-st)/2;

            if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1])  return mid;

            if(arr[mid-1]<arr[mid]){
                ans = mid;
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }
};
