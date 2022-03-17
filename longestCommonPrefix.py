class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        min = len(strs[0])
        for word in strs:
            if len(word) < min: min = len(word)

        prefix = ''
        i = 0
        while i < min:
            char = strs[0][i]
            for j in range(1, len(strs)):
                if strs[j][i] != char: return prefix
            prefix += char
            i += 1

        return prefix
