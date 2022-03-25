class Solution {
    public boolean checkInclusion(String s1, String s2) {
        int s1_len = s1.length();
		int s2_len = s2.length();
        if(s1_len > s2_len){
            return false;
        }
		int i, j;
        i = j = 0;
		int[] arr1 = new int[26];
		int[] arr2 = new int[26];
		while (j < s1_len) {
			arr1[s1.charAt(j) - 'a']++;
			arr2[s2.charAt(j) - 'a']++;
			j++;
		}
		if(Arrays.equals(arr1,arr2)){
            return true;
        }
		while (j < s2_len) {
			arr2[s2.charAt(j) - 'a']++;
			arr2[s2.charAt(i) - 'a']--;
			i++;
			j++;
			if (Arrays.equals(arr1, arr2))
				return true;
		}
		return false;
    }
}