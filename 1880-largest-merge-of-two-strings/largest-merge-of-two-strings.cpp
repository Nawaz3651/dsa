class Solution {
public:
    string largestMerge(string w1, string w2) {
        int i = 0;
        int j = 0;
        int n1 = w1.length();
        int n2 = w2.length();
        string res;
      while(i<n1 && j<n2){
            if(w1.substr(i)>w2.substr(j)){
                res+=w1[i++];
            }
            else{
                res+=w2[j++];
                
            }
        }
        while(i<n1){
            res+=w1[i++];
        }
        while(j<n2){
            res+=w2[j++];
        }
        return res;
    }
};  