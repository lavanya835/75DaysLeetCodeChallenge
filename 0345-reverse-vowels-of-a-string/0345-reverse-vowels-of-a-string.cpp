class Solution {
public:
    string reverseVowels(string s) {
        vector<int> pos;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='a'|| s[i]=='e'|| s[i]=='i' || s[i]=='o'|| s[i]=='u'||
               s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'){
                pos.push_back(i);

}
        }
        int left=0;
        int right=pos.size()-1;
        while(left<right){
            swap(s[pos[left]],s[pos[right]]);
            left++;
            right--;
        }
        return s;
        
    }
};