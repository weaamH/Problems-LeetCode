class Solution {
public:
    string reverseWords(string s) {
        int start = 0, end = 0, len = s.length();
        while(end<len){
            if(s[end] == ' '|| end == len-1){
                rev(s, start, end == len - 1 ? end: end - 1);
                start = end + 1;
            }
            end++;
        }
        return s;
    }
    void rev(string& s,int left, int right){
        while(left<right){
            char temp = s[left];
            s[left++] = s[right];
            s[right--] = temp;
        }
    }
};