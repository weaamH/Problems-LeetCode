def lengthOfLongestSubstring(s):
    longest = 0
    mp = {}
    i = 0
    for j in range(len(s)):
        if s[j] in mp:
            i = max(mp[s[j]], i)
        longest = max(longest, j - i + 1)
        mp[s[j]] = j + 1
    return longest
