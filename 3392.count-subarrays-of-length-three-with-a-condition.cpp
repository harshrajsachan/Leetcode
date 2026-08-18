// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size()-1;i++){
            int a=nums[i-1];
            int b=nums[i];
            int c=nums[i+1];
            if(b == (a+c)*2 ) count++;
        }
        return count;
    }
};
// @leet end
