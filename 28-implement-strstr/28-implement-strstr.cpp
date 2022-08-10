class Solution {
public:
    int strStr(string haystack, string needle) {
        int result=haystack.find(needle);
        if(haystack.size()<result){return -1;}
        return result;
    }
};