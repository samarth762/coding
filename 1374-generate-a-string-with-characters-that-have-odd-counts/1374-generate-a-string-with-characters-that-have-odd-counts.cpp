class Solution {
public:
    string generateTheString(int n) {
        int val;
        if(n%2!=0){val=n;}
        else if(n%2==0){
            val=n-1;
        }
        string str;
        for(int i=0;i<val;i++){
            str+='a';
        }
        if(val==n-1){str+='b';}
        return str;
    }
};