class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        for(int i=0;i<s.size()-1;i++){
            if(s==goal){
                return true;
            }
            rotate(s.begin(),s.begin()+1,s.end());
        }
        if(s==goal){
            return true;
        }
        return false;
    }
};