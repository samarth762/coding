class Solution {
public:
    string toGoatLatin(string sentence) {
        string result,val1;
        stringstream val(sentence);
        int count=1,j=0;
        unordered_set<char> ss{'a','e','i','o','u'};
        while(val>>val1){
            if(count>1){result+=" ";}
            string temp=val1;
            string temp2;
            if(ss.find(tolower(temp[0]))==ss.end()){
                temp2=temp.substr(1,temp.size()-1);
                temp2+=temp[0];
                temp=temp2;
            }
            temp+="ma";
            while(j<count){
                temp+='a';
                j++;
            }
            j=0;
            count++;
            result+=temp;
        }
        return result;
    }
};