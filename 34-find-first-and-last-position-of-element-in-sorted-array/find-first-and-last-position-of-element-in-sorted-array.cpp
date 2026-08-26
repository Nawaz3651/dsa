class Solution {
public:
    int firstpos(vector<int>& nums,int target){
        int l = 0;
        int r = nums.size() - 1;
        int fp = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
    
            if(nums[mid]<target){
                l = mid+1;
            }
            else if(nums[mid]>target){
                r = mid-1;
            }
            else{
                fp = mid;
                r = mid-1;
            }
            
        }
        return fp;
    }
    int lastpos(vector<int>& nums, int target){
        int l = 0;
        int r = nums.size() - 1;
        int lp = -1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]<target){
                l = mid+1;
            }
            else if(nums[mid]>target){
                r = mid-1;
            }
            else {
                lp = mid;
                l = mid+1;
            }
        }
        return lp;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int  i = firstpos(nums,target);
        int j = lastpos(nums,target);
        return {i,j};
    }
};