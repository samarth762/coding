class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                string ss=s.substr(0,i);
                int t=n/i;
                string s1;
                for(int j=0;j<t;j++){
                    s1+=ss;
                }
                if(s1==s){
                    return true;
                }
            }
        }
        return false;
    }
};