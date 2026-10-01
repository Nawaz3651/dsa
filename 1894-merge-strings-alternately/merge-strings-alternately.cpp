class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        int l1 = word1.length();
        int l2 = word2.length();
        string result = "";
        while(i<l1 && j<l2){
            result+=word1[i];
            result+=word2[j];
            i++;
            j++;
        }
        while(i<l1){
            result+=word1[i++];
        }
        while(j<l2){
            result+=word2[j++];
        }
    return result;
    }
};