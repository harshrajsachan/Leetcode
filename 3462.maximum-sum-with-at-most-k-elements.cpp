// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        vector<int> v;
        for(int i=0;i<grid.size();i++){
            sort(grid[i].rbegin(),grid[i].rend());
            for(int j=0;j<limits[i];j++) v.push_back(grid[i][j]);
        }
        long long sum = 0;
        sort(v.rbegin(),v.rend());
        for(int i=0;i<k;i++) sum += v[i];
        return sum;
    }
};
// @leet end
