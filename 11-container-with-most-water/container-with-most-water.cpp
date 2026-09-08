class Solution {
public:
    int min(int a,int b){
        if(a<b){
            return a;
        }
        else{
            return b;
        }
    }
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int max = 0;
        while(i<j){
            int product = min(height[i],height[j]) * (j-i);
            if(product>max){
                max = product;
            }
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
            
        }
        return max;
    }
};