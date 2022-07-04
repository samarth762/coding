class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                v.push_back(i);
            }
        }
        vector<int> result;
        if(v.size()==1){
            for(int i=0;i<s.size();i++){
                result.push_back(abs(v[0]-i));
            }
            return result;
        }
        int k=1;
        for(int j=0;j<s.size();j++){
            int val=(abs(v[k]-j)>abs(v[k-1]-j))?abs(v[k-1]-j):abs(v[k]-j);
            if(abs(v[k]-j)<abs(v[k-1]-j) && k<v.size()-1){
                k++;
            }
            result.push_back(val);
        }
        return result;
    }
};