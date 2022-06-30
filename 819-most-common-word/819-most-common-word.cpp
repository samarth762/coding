class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int start=0,len=0;
        vector<string> vec;
        for(int i=0;i<paragraph.size();i++){
            if(isalpha(paragraph[i])){
                if(isupper(paragraph[i])){
                    char temp=tolower(paragraph[i]);
                    paragraph[i]=temp;
                }
                len++;
            }
            else{
                string temp=paragraph.substr(start,len);
                if(temp.size()>=1){
                    vec.push_back(temp);
                }
                start=i+1;
                len=0;
            }
        }
        string temp=paragraph.substr(start,len);
        if(temp.size()>1){
            vec.push_back(temp);
        }
        map<string,int> m;
        for(int i=0;i<vec.size();i++){
            m[vec[i]]++;
        }
        int val=0;
        string temp1;
        for(auto i:m){
            if(find(banned.begin(),banned.end(),i.first)==banned.end()){
                if(val<i.second){
                    val=i.second;
                    temp1=i.first;
                }
            }
        }
        return temp1;
    }
};