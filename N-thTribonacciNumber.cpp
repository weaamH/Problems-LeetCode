class Solution {
public:
    int tribonacci(int n) {
        if(n==0 || n==1) return n;
        if(n==2) return 1;
        int tribonacci_sequence[n+1];
        tribonacci_sequence[0] = 0;
        tribonacci_sequence[1] = 1;
        tribonacci_sequence[2] = 1;
        for(int i=3; i<=n; i++){
            tribonacci_sequence[i] = tribonacci_sequence[i-1]+
                tribonacci_sequence[i-2]+
                tribonacci_sequence[i-3];
        }
        return tribonacci_sequence[n];
    }
};