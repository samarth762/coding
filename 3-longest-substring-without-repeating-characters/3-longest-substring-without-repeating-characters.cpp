class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1){return s.size();}
        int i=0,j=1,cnt=1,val=1;
        unordered_map<char,int> m;
        m[s[0]]=0;
        while(j<s.size()){
            if(m.find(s[j])==m.end()){
                cnt=j-i+1;
            }
            else{
                if(i<=m[s[j]]){
                    i=m[s[j]];
                    i+=1;
                }
                cnt=j-i+1;
                m.erase(s[j]);
            }
            m[s[j]]=j;
            val=max(val,cnt);
            j++;
        }
        return val;
    }
};