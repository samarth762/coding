// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long l=1,h=(long long)n,ans;
        while(h>=l){
            int mid=(l+h)/2;
            if(isBadVersion(mid)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return (int)ans;
    }
};