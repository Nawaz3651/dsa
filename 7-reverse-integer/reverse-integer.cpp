class Solution {
public:
    int reverse(int x) {
       signed int num = 0;
        while(x!=0){
            int val = x%10;
            x = x/10;
            if(num>214748364 || num==214748364 && val>7){
                return 0;
            }
            if(num< -214748364 || num == -214748364 && val<-8){
                return 0;
            }
            num = num*10 + val;
        }
        return num;
    }
};