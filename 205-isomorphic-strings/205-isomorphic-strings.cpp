class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,char> m;
        unordered_set<char> ss;
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])==m.end()){
                if(ss.find(t[i])==ss.end()){
                    m[s[i]]=t[i];
                    ss.insert(t[i]);
                }
                else{
                    return false;
                }
            }
            else{
                if(m[s[i]]!=t[i]){
                    return false;
                }
            }
        }
        return true;
    }
};