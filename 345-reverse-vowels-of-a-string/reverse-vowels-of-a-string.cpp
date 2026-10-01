bool isVowel(char c){
            char ch = tolower(c);
            if(ch=='a' || ch == 'e' || ch=='i' || ch=='o' || ch=='u'){
                return true;
            }
            return false;
}
class Solution {
public:
        string reverseVowels(string s){
            int n = s.length();
            int i = 0;
            int j = n-1;
            while(i<j){
                if(!isVowel(s[i])){
                    i++;
                }
                else if(!isVowel(s[j])){
                    j--;

                }
                else{
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
            }
     return s;
        }

};