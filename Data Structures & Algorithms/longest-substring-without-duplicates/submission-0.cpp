
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxLen = 0;
        int n = s.length();
        int freq[128] = {0};

        for (int right = 0; right < n; right++) {
            freq[(unsigned char)s[right]]++;

            while (freq[(unsigned char)s[right]] > 1) {
                freq[(unsigned char)s[left]]--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
