class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size()<=k){
            reverse(s.begin(),s.end());
        }
        else if(s.size()>k){
            int i=0,j=0;
            while(j<s.size()){
                i=j;
                if(i+k<=s.size()){
                    reverse(s.begin()+i,s.begin()+i+k);
                }
                else{
                    reverse(s.begin()+i,s.end());
                }
                j+=(2*k);
            }
        }
        return s;
    }
};