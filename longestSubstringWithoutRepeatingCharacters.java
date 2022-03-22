class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> hash_set = new HashSet<>();
        int right, left, counter;
        right = left = counter = 0;
        int n=s.length();
        while(right<n){
            if(!hash_set.contains(s.charAt(right))){
                hash_set.add(s.charAt(right));
                right++;
                counter = Math.max(counter, hash_set.size());
            }
            else{
                hash_set.remove(s.charAt(left));
                left++;
            }
        }
        return counter;
    }
}