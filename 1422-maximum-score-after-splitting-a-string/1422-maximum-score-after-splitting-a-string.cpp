class Solution {
public:
    int maxScore(string s) {
        int one=0,zero=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                one++;
            }
        }
        int result=INT_MIN;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                zero++;
            }
            else if(s[i]=='1'){
                one--;
            }
            result=max(result,zero+one);
        }
        return result;
    }
};