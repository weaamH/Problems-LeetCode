class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;
        vector<int> answer;
        for(int i = 0 ; i<numbers.size(); i++){
            if(numbers[left]+numbers[right]== target){
                answer.push_back(left+1);
                answer.push_back(right+1);
                break;
            }
            else if(numbers[left]+numbers[right] > target){
                right--;
            }
            else {
                left++;
            }
        }
        return answer;
    }
};