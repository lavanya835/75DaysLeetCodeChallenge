class Solution {
public:
    bool isPalindrome(string s) {
        string b;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                 b+=tolower(s[i]);
            }

           
        }
        int left=0;
        int right=b.size()-1;
        while(left<right){
           
            if(b[left]==b[right]){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
    return true;  
        
    }
};