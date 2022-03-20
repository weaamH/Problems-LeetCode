class Solution {
    public int[] sortedSquares(int[] nums) {
        int pos = 0, neg, len = nums.length;
        while(pos<len && nums[pos]<0){
            pos++;
        }
        neg = pos - 1;
        int[] sortedArray = new int[len];
        int counter = 0;
        while(neg>=0 && pos<len){
            if(-nums[neg]*nums[pos] < nums[neg]*nums[neg]){
                sortedArray[counter] = nums[pos]*nums[pos];
                pos++;
            }
            else{
                sortedArray[counter] = nums[neg]*nums[neg];
                neg--;
            }
            counter++;
        }
        while(neg>=0){
            sortedArray[counter] = nums[neg]*nums[neg];
            neg--;
            counter++;
        }
        while(pos<len){
            sortedArray[counter] = nums[pos]*nums[pos];
            pos++;
            counter++;
        }
        return sortedArray;
    }
}