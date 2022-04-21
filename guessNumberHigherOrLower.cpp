/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 1, right = n, middle;
        while(left<=right){
            middle = left+(right-left)/2;
            if(guess(middle) == 0) return middle;
            else if(guess(middle) > 0) left = middle+1;
            else if(guess(middle) < 0) right = middle-1;
        }
        return -1;
    }
};