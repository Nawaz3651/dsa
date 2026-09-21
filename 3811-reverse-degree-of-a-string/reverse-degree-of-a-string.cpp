int reverseIndex(char s){
    int z = 'z';
    int res = (int)z - (int)s +1;
    return res;
}
class Solution {
public:

    int reverseDegree(string s) {

        int n = s.size();
        int sum =0 ;
        for(int i = 0;i<n;i++){
            sum += reverseIndex(s[i])*(i+1);
        }
        return sum;
    }
};