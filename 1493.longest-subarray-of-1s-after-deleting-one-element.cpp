// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start = 0, count = 0, m = 0;
        for(int end = 0; end < nums.size();end++){
            if(nums[end]==0) count++;
            while(count>1){
                if(nums[start]==0) count--;
                start++;
            }
            m = max(m,end-start);
        }
        return m;
    }
};
// @leet end
