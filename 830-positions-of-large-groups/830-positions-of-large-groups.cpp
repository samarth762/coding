class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> vec;
        int count=0,start=0;
        
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i]){
                count++;
            }
            else{
                vector<int> v;
                if(count+1>=3){
                    v.push_back(start);
                    v.push_back(i-1);
                    vec.push_back(v);
                }
                count=0;
                start=i;
            }
        }
        if(count+1>=3){
            vector<int> v;
            v.push_back(start);
            v.push_back(s.size()-1);
            vec.push_back(v);
        }
        return vec;
    }
};