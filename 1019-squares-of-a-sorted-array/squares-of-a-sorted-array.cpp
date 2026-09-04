class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>pos;
        vector<int>neg;
        int k = 0;
        while(k < n){
            if(nums[k]>=0){
                pos.push_back(nums[k]);
                k++;
            }
            else{
                neg.push_back(nums[k]);
                k++;
            }
        }
        for(int i = 0;i<neg.size();i++){
                neg[i] = pow(neg[i],2);
            }
        for(int i =0 ;i<pos.size();i++){
                pos[i] = pow(pos[i],2);
            }
        reverse(neg.begin(),neg.end());

        
        if(pos.size()==0){
            return neg;
        }
        else if(neg.size()==0){
            return pos;
        }
        else{
            int i = 0;
            int j = 0 ;
            int m = 0;
            while(i<neg.size() && j<pos.size()){
                if(neg[i]>pos[j]){
                    nums[m++] = pos[j++];
                }
                else{
                    nums[m++] = neg[i++];
                }
            }
            while(i<neg.size()){
                nums[m++] = neg[i++];
            }
            while(j<pos.size()){
                nums[m++] = pos[j++];
            }
            return nums;
        }


    }
};