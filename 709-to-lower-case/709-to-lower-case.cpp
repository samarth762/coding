class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])){
                char temp=tolower(s[i]);
                s[i]=temp;
            }
        }
        return s;
    }
};