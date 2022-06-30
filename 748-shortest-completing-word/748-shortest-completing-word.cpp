class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char,int> m,m1;
        for(int i=0;i<licensePlate.size();i++){
            char temp;
            if(isalpha(licensePlate[i])){
                if(isupper(licensePlate[i])){
                    temp=tolower(licensePlate[i]);
                    m[temp]++;
                }
                else{
                    m[licensePlate[i]]++;
                }
            }
        }
        int val=INT_MAX;
        string val1;
        for(int i=0;i<words.size();i++){
            m1=m;
            for(int j=0;j<words[i].size();j++){
                char temp=tolower(words[i][j]);
                if(m1.find(temp)!=m1.end()){
                    m1[temp]--;
                    if(m1[temp]==0){
                        m1.erase(temp);
                    }
                }
            }
            if(m1.empty()){
                if(val>words[i].size()){
                    val=words[i].size();
                    val1=words[i];
                }
            }
        }
        return val1; 
    }
};