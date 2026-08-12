class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);

        int left = 0;
        int maxFreq = 0;
        int longest = 0;

        for (int right = 0; right < s.size(); right++) {

            // Add current character
            freq[s[right] - 'A']++;

            // Largest frequency in current/history
            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            // How many characters must be changed?
            int replacements = (right - left + 1) - maxFreq;

            // Too many changes needed
            if (replacements > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            longest = max(longest, right - left + 1);
        }

        return longest;
    }
};