class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> ss;
        set<string> vec;
        for(int i=0;i<paths.size();i++){
            ss.insert(paths[i][0]);
            vec.insert(paths[i][1]);
        }
        for(auto i=vec.begin();i!=vec.end();i++){
            if(ss.find(*i)==ss.end()){
                return *i;
            }
        }
        return "";
    }
};