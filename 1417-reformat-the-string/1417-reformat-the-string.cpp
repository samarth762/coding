class Solution {
public:
    string reformat(string s) {
        int digit=0,alpha=0;
        string digit1,alpha1;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                digit++;
                digit1+=s[i];
            }
            else if(isalpha(s[i])){
                alpha++;
                alpha1+=s[i];
            }
        }
        if(abs(digit-alpha)>=2){
            return "";
        }
        string temp,temp2;
        if(alpha>digit){
            temp=alpha1;
            temp2=digit1;
        }
        else{
            temp=digit1;
            temp2=alpha1;
        }
        cout<<temp<<temp2;
        int j=1,k=0;
        while(k<temp2.size()){
            temp.insert(j,1,temp2[k]);
            k++;
            j=j+2;
        }
        return temp;
    }
};