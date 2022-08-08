class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==2 || n==3) return n;
        int ways[n+1];
        ways[0] = 1;
        ways[1] = 1;
        ways[2] = 2;
        for(int i=3; i<=n; i++){
            ways[i] = ways[i-1]+ways[i-2];
        }
        return ways[n];
    }
};