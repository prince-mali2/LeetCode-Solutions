class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        int i = 0, j = 0, ans = 0, n = s.size();

        while (j < n) {
            // Update the frequency map for the current character
            m[s[j]]++;

            // Check if there is any duplicate character in the current window
            while (m[s[j]] > 1) {
                m[s[i]]--; // Reduce the frequency of the character at 'i'
                i++;       // Shrink the window from the left
            }

            // Calculate the length of the current substring and update the maximum
            ans = max(ans, j - i + 1);

            // Expand the window by moving 'j' forward
            j++;
        }
        return ans;
    }
};
