// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int sum = target - nums[i];
            if(m.count(sum)) return {m[sum],i};
            m[nums[i]]=i;
        }
        return {-1,-1};
    }
};
// @leet end
