// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans(n,'a');
        k -= n;
        int i = ans.size()-1;
        while(k>0){
            int add = min(25,k);
            ans[i] += add;
            k -= add;
            i--;
        }
        return ans;
    }
};
// @leet end
