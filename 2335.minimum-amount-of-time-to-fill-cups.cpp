// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
    int fillCups(vector<int>& amount) {
        int total = amount[0]+amount[1]+amount[2];
        return max(*max_element(amount.begin(),amount.end()),(total+1)/2);
    }
};
// @leet end
