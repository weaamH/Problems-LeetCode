class Solution {
    void backtracking(int n, int k, vector<int>& tmp_ans, vector<vector<int>>& ans) {
        if (tmp_ans.size() == k) {
            ans.push_back(tmp_ans);
            return;
        }
        for (int i = n; i + tmp_ans.size() >= k; i--) {
            tmp_ans.push_back(i);
            backtracking(i - 1, k, tmp_ans, ans);
            tmp_ans.pop_back();
        }
    }

public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> current;
        backtracking(n, k, current, result);
        return result;
    }
};