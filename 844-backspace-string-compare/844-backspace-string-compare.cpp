class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<int> v1,v2;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                v1.push_back(i);
            }
        }
        int i=0,k=0;
        while(i<v1.size()){
            if(v1[i]-k-1<0){s.erase(v1[i]-k,1);k+=1;}
            else{s.erase(v1[i]-1-k,2);k+=2;}
            i++;
            // cout<<s;
        }
        i=0,k=0;
        for(int j=0;j<t.size();j++){
            if(t[j]=='#'){
                v2.push_back(j);
            }
        }
        while(i<v2.size()){
            if(v2[i]-k-1<0){t.erase(v2[i]-k,1);k+=1;}
            else{t.erase(v2[i]-1-k,2);k+=2;}
            
            i++;
        }
        cout<<s<<" "<<t;
        if(s==t){return true;}
        return false;
    }
};