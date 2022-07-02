class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> ss;
        vector<string> vec{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i=0;i<words.size();i++){
            string s1="";
            for(int j=0;j<words[i].size();j++){
                int val=words[i][j]-'a';
                s1+=vec[val];
            }
            ss.insert(s1);
        }
        return ss.size();
    }
};