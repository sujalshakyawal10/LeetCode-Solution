class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(),m = nums2.size();
        vector<float>merge;
        for(int i=0 ; i<n;i++){
            merge.push_back(nums1[i]);
        }
        for(int i=0 ; i<m;i++){
            merge.push_back(nums2[i]);
        }
        sort(merge.begin(),merge.end());

        int total=merge.size();

        if(total%2 == 1){
            return merge[total/2];
        }
        else{
            
            return (merge[total/2 -1]+merge[total/2])/2;
        }
    }
};
