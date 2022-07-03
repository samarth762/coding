class Solution {
public:
    int arrangeCoins(int n) {
        int result=0;
        int i=1;
        while(n>0){
            if(n>=i){
                n-=i;
                result++;
            }
            else if(i>n){
                break;
            }
            i++;
        }
        return result;
    }
};