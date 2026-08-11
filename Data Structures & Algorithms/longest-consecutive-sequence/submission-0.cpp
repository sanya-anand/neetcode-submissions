class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;

        unordered_set<int>st(nums.begin(), nums.end());
        for(int num : nums)
        {
            if(st.find(num-1) == st.end())
            {
                int curr = num;
                int count = 1;
                while(st.find(curr+1) != st.end())
                {   curr++; 
                    count++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};
