class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;
        map<int,vector<string>> m;
        for(int i=0;i<words.size();i++){
            m[words[i].size()].push_back(words[i]);
        }
        vector<string> vec;
        for(auto i:m){
            for(int j=0;j<i.second.size();j++){
                vec.push_back(i.second[j]);
            }
        }
        for(int i=0;i<vec.size()-1;i++){
            int ss=vec[i].size();
             for(int j=i+1;j<vec.size();j++){
                 if(ss<vec[j].size()){
                     int val=vec[j].find(vec[i]);
                     if(val<vec[j].size()){
                         result.push_back(vec[i]);
                         break;
                     }
                 }
             }
        }
        return result;
    }
};