class Solution {
public:
    void reverseString(vector<char>& s) {
        int length = s.size(), start = 0, end = length - 1;
        char temp;
        while(start<end){
            temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
};